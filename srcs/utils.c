/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:20:19 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 12:22:10 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

int	get_stack_size(t_lst *stack)
{
	int count;

	count = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}