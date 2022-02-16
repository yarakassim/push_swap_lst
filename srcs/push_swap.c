/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:50:12 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/16 15:05:01 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int sort_args(int ac, char **av)
{
	int		i;
	t_lst	*stack_a;

	i = 0;
	stack_a = NULL;
	if (ac > 1)
	{
		while (av[++i])
		{
			if (!fill_stack(&stack_a, ft_atoi(av[i])))
			{
				liberate(stack_a);
				return (0);
			}
		}
		if (check_order(stack_a))
		{
			liberate(stack_a);
			return (0);
		}
		while (stack_a != NULL)
		{
			printf("%d\n", stack_a->element);
			stack_a = stack_a->next;
		}
		/*if (A->counter < 12)
			little_algo(av, A, B);
		else
		radix(av, stack_A, stack_B);*/
	}
	return (1);
}

int	fill_stack(t_lst **stack_a, int num)
{
	t_lst *add;
	t_lst *end;
	
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

t_lst	*lst_create(int num)
{
	t_lst	*new;

	new = (t_lst *)malloc(sizeof(t_lst));
	if (!new)
		return (NULL);
	new->element = num;
	new->next = NULL;
	return (new);
}

int check_order(t_lst *stack_a)
{
	t_lst	*save;
	int		check;

	save = stack_a;
	while (save->next != NULL)
	{
		check = save->element;
		if (check > save->next->element)
			return (0); 
		save = save->next;
	}
	return (1);
}
