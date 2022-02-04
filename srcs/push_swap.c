/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:50:12 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/04 16:09:15 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_args(int ac, char **av)
{
	t_stack	*A;
	t_stack	*B;

	A = (t_stack *)malloc(sizeof(t_stack));
	B = (t_stack *)malloc(sizeof(t_stack));
	A->counter = ac - 1;
	B->counter = 0;
	if (A->counter > 1)
	{
		A->stack = (int *)malloc(sizeof(int) * A->counter);
		if (!A->stack)
			return (0);
		B->stack = (int *)malloc(sizeof(int) * A->counter);
		if (!B->stack)
			return (0);
		fill_stack(av, A);
		//if (check_order)
		/*if (A->counter < 12)
			little_algo(av, A, B);
		else
		radix(av, stack_A, stack_B);*/
	}
	else
	{
		liberate(1, A, B);
		return (0);
	}
	liberate(2, A, B);
	return (1);
}

void	fill_stack(char **av, t_stack *A)
{
	int count;
	int i;

	count = 0;
	i = 1;
	while (count < A->counter)
	{
		A->stack[count] = ft_atoi(av[i]);
		i++;
		count++;
	}
}

//int check_order(int *stack)
