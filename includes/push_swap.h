/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:14:07 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/11 23:16:36 by yarakassim       ###   ########.fr       */
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


//t_stack *mv_args_to_stack(int ac, char **av);
int check_args(char **av);
int check_int(char *av);
int check_overflows(long n);
int check_doubles(char **av);
int sort_args(int ac, char **av);
int fill_stack(t_lst **A, int num);
t_lst	*lst_create(int num);
//void little_algo(char **av, t_stack *A, t_stack *B);
//void sort_3(char **av, t_stack *A, t_stack *B);
//void sort_5(char **av, int *stack_A, int *stack_B);
//void sort_10(char **av, int *stack_A, int *stack_B);
int *sa(t_lst *A);
int *sb(t_lst *B);
//int check_order(int *stack);
void ss(t_lst *A, t_lst *B);

#endif