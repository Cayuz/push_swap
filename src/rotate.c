/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/07 19:22:52 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/15 17:39:51 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	last->next = first;
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
