/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/01 17:25:19 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/01 16:32:44 by cvan-vli      ########   odam.nl         */
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

t_list	*create_stack(int argc, char **argv, t_list *a, t_list *b);
t_list	*create_list(char *argv[]);
void	print_list(t_list *node, int stack);
void	ft_error(void);
int		ft_checkdigit(t_list *a);
int		ft_dup(t_list *a, t_list *b);
int		ft_min_max(t_list *arg);
void	ft_check(t_list *a);
void	free_lists(t_list *a, t_list *b);

#endif
