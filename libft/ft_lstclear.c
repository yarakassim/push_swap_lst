/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:18:19 by ykassim-          #+#    #+#             */
/*   Updated: 2021/06/08 07:44:53 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*save;

	if (lst)
	{
		while (*lst)
		{
			save = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = save;
		}
	}
	*lst = NULL;
}
