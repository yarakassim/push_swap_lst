/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 09:07:46 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 16:53:30 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	int	less_than(t_lst *elem_one, t_lst *elem_two)
{
	if (elem_one->element < elem_two->element)
		return (1);
	return (0);
}

static	int	high_than(t_lst *elem_one, t_lst *elem_two)
{
	if (elem_one->element > elem_two->element)
		return (1);
	return (0);
}

void	little_algo(t_lst **stack_a, t_lst **stack_b)
{
	int	median;

	if (get_stack_size(*stack_a) > 3)
	{
		median = get_stack_size(*stack_a) / 2;
		while (get_stack_size(*stack_a) > 3)
		{
			if ((*stack_a)->pos < median)
				push_b(stack_a, stack_b);
			else
				rotate(stack_a, 0);
		}
		if (!check_order(*stack_a))
			sort_three(stack_a);
		if ((*stack_b)->next && (*stack_b)->element < (*stack_b)->next->element)
			swap(stack_b, 1);
		while (*stack_b)
			push_a(stack_a, stack_b);
		if ((*stack_a)->next && (*stack_a)->element > (*stack_a)->next->element)
			swap(stack_a, 0);
	}
	else
		sort_three(stack_a);
}

void	sort_three(t_lst **stack_a)
{
	t_lst	*first;
	t_lst	*second;
	t_lst	*third;

	first = *stack_a;
	second = (*stack_a)->next;
	third = (*stack_a)->next->next;
	filter(first, second, third, stack_a);
}

void	filter(t_lst *first, t_lst *second, t_lst *third, t_lst **stack_a)
{
	if (less_than(first, second)
		&& high_than(second, third) && less_than(first, third))
	{
		reverse_rotate(stack_a, 0);
		swap(stack_a, 0);
	}
	else if (less_than(first, second)
		&& high_than(second, third) && high_than(first, third))
		reverse_rotate(stack_a, 0);
	else if (high_than(first, second)
		&& less_than(second, third) && high_than(first, third))
		rotate(stack_a, 0);
	else if (high_than(first, second) && high_than(second, third))
	{
		swap(stack_a, 0);
		reverse_rotate(stack_a, 0);
	}
	else
		swap(stack_a, 0);
}
