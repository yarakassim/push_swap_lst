/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:13:25 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 23:14:02 by yarakassim       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	ac--;
	if (!av[1])
		return (0);
	if (!check_args(av))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (!sort_args(ac, av))
	{
		write(2, "sorry, unable to initialize stack\n", 35);
		return (0);
	}
	return (0);
}
