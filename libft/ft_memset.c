/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:33:44 by ykassim-          #+#    #+#             */
/*   Updated: 2021/06/01 11:21:40 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset	(void *b, int c, size_t len)
{
	unsigned char	*rep;

	rep = (unsigned char *)b;
	while (len)
	{
		*rep = (unsigned char)c;
		rep++;
		len--;
	}
	return (b);
}
