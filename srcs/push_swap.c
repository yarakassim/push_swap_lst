/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:50:12 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/11 23:25:12 by yarakassim       ###   ########.fr       */
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
		A = (t_stack *)malloc(sizeof(t_stack));
		if (!A)
			return (0);
		while (av[++i])
		{
			if (!fill_stack(&A, ft_atoi(av[i])))
			{
				free(A);
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

int	fill_stack(t_stack **A, int num)
{
	t_node *tmp;
	t_node *end;

	if (!((*A)->head))
	{
		(*A)->head = lst_create(num);
	}
	else
	{
		tmp = (*A)->head;
		while ((*A)->head->next != NULL)
			(*A)->head = (*A)->head->next;
		end = lst_create(num);
		(*A)->head->next = end;
		(*A)->head = tmp;
	}
	return (1);
}

t_node	*lst_create(int num)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->element = num;
	new->next = NULL;
	return (new);
}

//int check_order(int *stack)
