/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:13:25 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/16 11:25:27 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
int main(int ac, char **av)
{
	ac--;
	if (!av[1])
		return (0);
	if (!check_args(av))
	{
		write(0, "Error\n", 6);
		return (0);
	}
	if (!sort_args(ac, av))
	{
		write(0, "sorry, unable to initialize stack\n", 35);
		return (0);
	}
	return (0);	
}