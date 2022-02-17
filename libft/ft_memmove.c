/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 10:34:56 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 22:56:34 by yarakassim       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	if (src == NULL && dst == NULL)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst > src)
	{
		while (i++ < len)
		{
			d[len - i] = s[len - i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
