/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 09:12:21 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 16:54:12 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_lst **the_stack, int stack_id)
{
	t_lst	*head;
	t_lst	*second;

	if (get_stack_size(*the_stack) > 1)
	{
		head = *the_stack;
		second = head->next;
		head->next = second->next;
		second->next = head;
		*the_stack = second;
		if (stack_id == 0)
			write(1, "sa\n", 3);
		else
			write(1, "sb\n", 3);
	}
}

void	rotate(t_lst **the_stack, int stack_id)
{
	t_lst	*head;
	t_lst	*last;

	if (get_stack_size(*the_stack) > 1)
	{
		last = *the_stack;
		while (last->next != NULL)
			last = last->next;
		head = *the_stack;
		*the_stack = (*the_stack)->next;
		last->next = head;
		head->next = NULL;
		if (stack_id == 0)
			write(1, "ra\n", 3);
		else
			write(1, "rb\n", 3);
	}
}

void	reverse_rotate(t_lst **the_stack, int stack_id)
{
	t_lst	*head;
	t_lst	*last;

	if (get_stack_size(*the_stack) > 1)
	{
		head = *the_stack;
		last = *the_stack;
		while (last->next != NULL)
			last = last->next;
		while (head->next->next != NULL)
			head = head->next;
		head->next = NULL;
		last->next = *the_stack;
		*the_stack = last;
		if (stack_id == 0)
			write(1, "rra\n", 4);
		else
			write(1, "rrb\n", 4);
	}
}

void	push_a(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*head_b;

	if (get_stack_size(*stack_b) > 0)
	{
		head_b = *stack_b;
		*stack_b = (*stack_b)->next;
		head_b->next = *stack_a;
		*stack_a = head_b;
		write(1, "pa\n", 3);
	}
}

void	push_b(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*head_a;

	if (get_stack_size(*stack_a) > 0)
	{
		head_a = *stack_a;
		*stack_a = (*stack_a)->next;
		head_a->next = *stack_b;
		*stack_b = head_a;
		write(1, "pb\n", 3);
	}
}
