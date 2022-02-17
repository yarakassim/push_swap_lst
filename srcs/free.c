/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 07:38:27 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 12:13:27 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void liberate(t_lst **stack_a)
{
	while ((*stack_a)->next != NULL)
	{
		free(*stack_a);
		*stack_a = (*stack_a)->next;
	}
}