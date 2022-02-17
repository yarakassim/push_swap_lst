/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:33:44 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 22:57:24 by yarakassim       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
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
