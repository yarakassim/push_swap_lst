/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarakassim <yarakassim@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:14:07 by ykassim-          #+#    #+#             */
/*   Updated: 2022/02/17 23:00:05 by yarakassim       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_lst
{
	int				element;
	int				pos;
	struct s_lst	*next;
}							t_lst;

int			check_args(char **av);
int			check_int(char *av);
int			check_overflows(long n);
int			check_doubles(char **av);
int			sort_args(int ac, char **av);
int			fill_stack(t_lst **stack_a, int num);
int			ft_isdigit2(char *av);
int			check_order(t_lst *stack_a);
int			get_stack_size(t_lst *stack);
int			ready_set_sort(t_lst **stack_a, t_lst **stack_b);
void		liberate(t_lst **bye_stack);
void		swap(t_lst **the_stack, int stack_id);
void		rotate(t_lst **the_stack, int stack_id);
void		reverse_rotate(t_lst **the_stack, int stack_id);
void		push_a(t_lst **stack_a, t_lst **stack_b);
void		push_b(t_lst **stack_a, t_lst **stack_b);
void		little_algo(t_lst **stack_a, t_lst **stack_b);
void		sort_three(t_lst **stack_a);
void		radix_sort(t_lst **stack_a, t_lst **stack_b);
void		filter(t_lst *first, t_lst *second, t_lst *third, t_lst **stack_a);
t_lst		*lst_create(int num);

#endif