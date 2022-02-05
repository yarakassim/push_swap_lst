/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:50:12 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/04 23:03:51 by yarakassim       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_args(int ac, char **av)
{
	int		i;
	t_stack	*A;

	i = 0;
	if (ac > 1)
	{
		fill_stack(A, ft_atoi(av[i]));
		//if (check_order)
		/*if (A->counter < 12)
			little_algo(av, A, B);
		else
		radix(av, stack_A, stack_B);*/
	}
	return (1);
}

void	fill_stack(t_stack **A, int num)
{
	t_stack *tmp;

	tmp = A;
	if (!(*A))
	{
		lst_create(num);
	}
}

t_lst	*lst_create(int num)
{
	
}

//int check_order(int *stack)
