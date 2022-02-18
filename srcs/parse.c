/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:49:52 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/18 14:44:41 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_args(char **av)
{
	int	i;

	i = 0;
	while (av[++i])
	{
		if (!check_int(av[i]))
			return (0);
	}
	if (!check_doubles(av))
		return (0);
	return (1);
}

int	check_int(char *av)
{
	long	n;

	if (ft_strncmp(av, "", 3) == 0)
		return (0);
	if (ft_strlen(av) > 11)
		return (0);
	if (!ft_isdigit2(av))
		return (0);
	n = ft_atoi(av);
	if (!check_overflows(n))
		return (0);
	return (1);
}

int	check_overflows(long n)
{
	if (n > 2147483647 || n < -2147483648)
		return (0);
	return (1);
}

int	check_doubles(char **av)
{
	int	c;
	int	i;

	c = 0;
	while (av[++c])
	{
		i = c;
		while (av[++i])
		{
			if (ft_strncmp(av[c], av[i], 11) == 0)
				return (0);
		}
	}
	return (1);
}

int	ft_isdigit2(char *av)
{
	int	i;

	i = 0;
	if (av[i] == 45 || av[i] == 43)
	{
		i++;
		if (av[i] == '0')
			return (0);
	}
	if (av[i])
	{
		while (av[i])
		{
			if (!ft_isdigit(av[i]))
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}
