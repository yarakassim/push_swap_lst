/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:53:02 by ykassim-          #+#    #+#             */
/*   Updated: 2021/06/07 15:22:51 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*five;

	five = (t_list *)malloc(sizeof(t_list));
	if (!five)
		return (NULL);
	five->content = content;
	five->next = NULL;
	return (five);
}
