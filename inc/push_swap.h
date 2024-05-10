/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 20:13:03 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/10 19:24:06 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib42/inc/libft.h"
# include <limits.h>

/*=================UTILS=================*/
t_list	*init_stack(int ac, char **av);
void	check_dup(t_list *head);
int		max_index(t_list *list);
bool	sort_check(t_list *a);

/*==================PUSH=================*/
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_b, t_list **stack_a);

/*==================SWAP=================*/
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

/*=================ROTATE================*/
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);

/*=============REVERSE_ROTATE============*/
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

/*==================SORT=================*/
void	sorts(t_list **stack_a, t_list **stack_b);
void	index_sort(t_list **list);

/*===============LIST_UITLS==============*/
t_list	*create_list(char **av);

void	check_digit(char *s);
void	check_input(char **input);

#endif