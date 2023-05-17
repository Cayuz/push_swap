/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rev_rotate.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/09 16:59:52 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/17 16:50:47 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*=======================================================================================================
rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
rrr : rra and rrb at the same time.
=======================================================================================================*/

static void	rev_rotate(t_list **head)
{
	t_list	*last;
	t_list	*tmp;

	if (!(*head))
		return ;
	last = *head;
	while (last->next)
		last = last->next;
	tmp = *head;
	while (tmp->next->next)
		tmp = tmp->next;
	last->next = *head;
	tmp->next = NULL;
	*head = last;
}

void	rra(t_list **a)
{
	rev_rotate(a);
	ft_putendl("rra");
}

void	rrb(t_list **b)
{
	rev_rotate(b);
	ft_putendl("rrb");
}

void	rrr(t_list **a, t_list **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_putendl("rrr");
}
