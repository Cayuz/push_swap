/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 19:22:52 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/17 16:49:44 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*=============================================================================================
ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
rr : ra and rb at the same time.
==============================================================================================*/

static void	rotate(t_list **head)
{
	t_list	*first;
	t_list	*last;

	if (!*head || !(*head)->next)
		return ;
	last = *head;
	while (last->next)
		last = last->next;
	first = *head;
	*head = (*head)->next;
	first->next = NULL;
	last->next= first;
}

void	ra(t_list **a)
{
	rotate(a);
	ft_putendl("ra");
}

void	rb(t_list **b)
{
	rotate(b);
	ft_putendl("rb");
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_putendl("rr");
}