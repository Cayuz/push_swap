/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/01 17:25:19 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/04/10 15:09:28 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ==== libraries ==== */

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

/* ==== struct ==== */

typedef struct s_struct{
	int					value;
	struct s_struct		*next;
}	t_list;

/* ==== functions ==== */

t_list	*first_check(int argc, char **argv, t_list *a);
t_list	*create_list(char *argv[]);
t_list	*create_node(int abc);
int		link_node(t_list *current_node, t_list *next_node);
void	print_list(t_list *node, int stack);

#endif
