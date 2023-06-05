/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/01 17:25:19 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/05 14:36:47 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ==== LIBRARIES ==== */

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

/* ==== STRUCT ==== */

typedef struct s_struct{
	int					value;
	int					index;
	struct s_struct		*next;
}	t_list;

/* ==== FUNCTIONS ==== */

//linked list functions
t_list	*create_stack(int argc, char **argv);
t_list	*create_list(char *argv[]);

//check and trial functions
void	print_list(t_list *node, int stack);
void	print_index_test(t_list **head_a);
int		ft_checkdigit(t_list *a);
int		ft_dup(t_list *a);
int		node_counter(t_list **stack);
int		max_index(t_list *stack);

//free and error functions
void	ft_error(char *msg);
void	free_lists(t_list *list);

//swap functions
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

//push functions
void	pa(t_list **a, t_list **b);
void	pb(t_list **b, t_list **a);

//rotate + reverse rotate functions
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

//sort functions
void	indexsort(t_list **stack);
void	radix(t_list **a, t_list **b);
void	three_sort(t_list **a);
void	four_sort(t_list **a, t_list **b);
void	five_sort(t_list **a, t_list **b);
int		is_sorted(t_list *a);

#endif
