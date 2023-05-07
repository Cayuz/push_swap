/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 16:06:24 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/07 19:32:19 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*===========================================================================================================
sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
ss : sa and sb at the same time
===========================================================================================================*/

void	swap(t_list **head)
{
	t_list	*tmp;

	if (!*stack || !*stack->next)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
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
