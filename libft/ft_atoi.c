/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 11:51:19 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/04 16:51:58 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_zero(char c)
{
	if (c == 48)
		return (1);
	return (0);
}

long	ft_atoi	(const char *str)
{
	long	n;
	int		i;
	int		sign;

	n = 0;
	i = -1;
	sign = 1;
	while (check_zero(str[++i]));
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = -1;
	}
	while (ft_isdigit(str[++i]))
		n = n * 10 + str[i] - 48;
	return (n * sign);
}
