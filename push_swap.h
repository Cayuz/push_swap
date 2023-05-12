/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/01 17:25:19 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/12 14:50:25 by cvan-vli      ########   odam.nl         */
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
int		ft_checkdigit(t_list *a);
int		ft_dup(t_list *a);
	// void	ft_check(t_list *a);

//free and error functions
void	ft_error(char *msg);
void	free_lists(t_list *list);

//swap functions
void	swap(t_list **head);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);

//rotate functions
void	rotate(t_list **head);

//sort functions
void	indexsort(t_list **stack);
void	print_index_test(t_list **head_a);

#endif
