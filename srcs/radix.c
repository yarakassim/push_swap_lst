/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:22:47 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 13:12:10 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int get_bit_max(int value)
{
	int count;

	count = 0;
	while ((value >> count) != 0)
		count++;
	return (count);
}

void radix_sort(t_lst **stack_a, t_lst **stack_b)
{
	int bit_max;
	int get_size;
	int bit;

	bit = 0;
	bit_max = get_bit_max(get_stack_size(*stack_a) - 1);
	while (bit < bit_max)
	{
		get_size = get_stack_size(*stack_a);
		while (get_size--)
		{
			if ((((*stack_a)->pos >> bit) & 1) == 1)
				rotate(stack_a, 0);
			else
				push_b(stack_a, stack_b);
		}
		while (*stack_b != NULL)
			push_a(stack_a, stack_b);
		bit++;
	}
}