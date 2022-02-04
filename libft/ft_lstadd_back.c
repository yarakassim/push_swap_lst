/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:24:15 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/02 15:03:34 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *newlst)
{
	t_list	*save;

	if (!*alst)
		*alst = newlst;
	else
	{
		save = ft_lstlast(*alst)->next;
		ft_lstlast(*alst)->next = newlst;
		newlst->next = save;
	}
}
