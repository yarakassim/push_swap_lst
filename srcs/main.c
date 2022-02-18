/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:13:25 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/18 11:23:50 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	int	ret;

	ac--;
	if (!av[1])
		return (0);
	if (!check_args(av))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	ret = sort_args(ac, av);
	if (ret == -1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (ret == 0)
		return (0);
	return (0);
}
