/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <ykassim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:14:07 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/16 15:13:32 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

typedef struct s_lst
{
	int				element;
	struct s_lst 	*next;
}							t_lst;

/*typedef struct s_data
{
	t_lst	*stack_a;
	t_lst	*stack_b;
}							t_data;*/

int		check_args(char **av);
int		check_int(char *av);
int		check_overflows(long n);
int		check_doubles(char **av);
int		sort_args(int ac, char **av);
int		fill_stack(t_lst **stack_a, int num);
int		ft_isdigit2(char *av);
int		check_order(t_lst *stack_a);
void	liberate(t_lst *stack_a);
void	swap(t_lst **the_stack, int stack_id);
void	ss(t_lst *stack_a, t_lst *stack_b);
//void little_algo(char **av, t_stack *A, t_stack *B);
//void sort_3(char **av, t_stack *A, t_stack *B);
//void sort_5(char **av, int *stack_A, int *stack_B);
//void sort_10(char **av, int *stack_A, int *stack_B);
t_lst	*lst_create(int num);

#endif