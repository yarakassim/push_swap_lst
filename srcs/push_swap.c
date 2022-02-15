/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:50:12 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/15 23:46:11 by yarakassim       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_args(int ac, char **av)
{
	int		i;
	t_lst	*A;

	i = 0;
	A = NULL;
	if (ac > 1)
	{
		// A = (t_lst *)malloc(sizeof(t_lst));
		// if (!A)
		// 	return (0);
		while (av[++i])
		{
			if (!fill_stack(A, ft_atoi(av[i])))
			{
				liberate(A);
				return (0);
			}
		}
		//if (check_order)
		/*if (A->counter < 12)
			little_algo(av, A, B);
		else
		radix(av, stack_A, stack_B);*/
	}
	return (1);
}

int	fill_stack(t_lst *A, int num)
{
	t_lst *tmp;
	t_lst *end;

	if ((*A) == NULL)
	{
		(*A) = lst_create(num);
	}
	else
	{
		tmp = (*A);
		while ((*A)->next != NULL)
			(*A) = (*A)->next;
		end = lst_create(num);
		(*A)->next = end;
		(*A) = tmp;
	}
	return (1);
}

t_lst	*lst_create(int num)
{
	t_lst	*new;

	//write(0, "here\n", 5);
	new = (t_lst *)malloc(sizeof(t_lst));
	if (!new)
		return (NULL);
	new->element = num;
	new->next = NULL;
	return (new);
}

//int check_order(int *stack)
