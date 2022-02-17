/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 07:38:27 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 22:36:23 by yarakassim       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	liberate(t_lst **bye_stack)
{
	t_lst	*tmp;

	tmp = *bye_stack;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		if (*bye_stack)
			free(*bye_stack);
		*bye_stack = NULL;
		*bye_stack = tmp;
	}
	*bye_stack = NULL;
}
