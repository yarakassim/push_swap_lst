/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:14:07 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/06 21:52:16 by yarakassim       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

typedef struct s_node
{
	int				element;
	struct s_node 	*link;
}							t_node;

typedef	struct	s_stack
{
	struct s_node	*head;
}							t_stack;

//t_stack *mv_args_to_stack(int ac, char **av);
int check_args(char **av);
int check_int(char *av);
int check_overflows(long n);
int check_doubles(char **av);
int sort_args(int ac, char **av);
void fill_stack(t_stack **A, int num);
//void little_algo(char **av, t_stack *A, t_stack *B);
//void sort_3(char **av, t_stack *A, t_stack *B);
//void sort_5(char **av, int *stack_A, int *stack_B);
//void sort_10(char **av, int *stack_A, int *stack_B);
int *sa(t_stack *A);
int *sb(t_stack *B);
//int check_order(int *stack);
void ss(t_stack *A, t_stack *B);
void liberate(int n, t_stack *A, t_stack *B);

#endif