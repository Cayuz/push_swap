/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 16:06:24 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/15 17:39:38 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	sa(t_list **a)
{
	swap(a);
	ft_putendl("sa");
}

void	sb(t_list **b)
{
	swap(b);
	ft_putendl("sb");
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_putendl("ss");
}
