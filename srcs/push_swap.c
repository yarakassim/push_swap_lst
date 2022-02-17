/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:50:12 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 22:52:01 by yarakassim       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	int	get_pos(t_lst *start, int element)
{
	int	pos;

	pos = 0;
	while (start != NULL)
	{
		if (element > start->element)
			pos++;
		start = start->next;
	}
	return (pos);
}

static	void	init_pos(t_lst *stack_a)
{
	t_lst	*start;

	start = stack_a;
	while (stack_a)
	{
		stack_a->pos = get_pos(start, stack_a->element);
		stack_a = stack_a->next;
	}
}

int	sort_args(int ac, char **av)
{
	int		i;
	t_lst	*stack_a;
	t_lst	*stack_b;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		while (av[++i])
		{
			if (!fill_stack(&stack_a, ft_atoi(av[i])))
			{
				liberate(&stack_a);
				return (0);
			}
		}
		if (!ready_set_sort(&stack_a, &stack_b))
			return (0);
		liberate(&stack_a);
		liberate(&stack_b);
	}
	return (1);
}

int	fill_stack(t_lst **stack_a, int num)
{
	t_lst	*add;
	t_lst	*end;

	add = lst_create(num);
	if (add == NULL)
		return (0);
	if ((*stack_a) == NULL)
		(*stack_a) = add;
	else
	{
		end = *stack_a;
		while (end->next != NULL)
			end = end->next;
		end->next = add;
	}
	return (1);
}

int	ready_set_sort(t_lst **stack_a, t_lst **stack_b)
{
	if (check_order(*stack_a))
	{
		liberate(stack_a);
		return (0);
	}
	init_pos(*stack_a);
	if (get_stack_size(*stack_a) == 2)
		rotate(stack_a, 0);
	else if (get_stack_size(*stack_a) <= 5)
		little_algo(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
	return (1);
}
