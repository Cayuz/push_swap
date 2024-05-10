/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 15:48:49 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/08 19:56:19 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	rotate(t_list **head)
{
	t_list	*first;
	t_list	*last;

	if (!head || !(*head)->next)
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
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
