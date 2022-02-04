/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:21:48 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/04 12:25:56 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void liberate(int n, t_stack *A, t_stack *B)
{
	if (n == 1)
	{
		free(A);
		free(B);
	}
	else
		if (n == 2)
		{
			free(A->stack);
			free(B->stack);
			free(A);
			free(B);
		}
}