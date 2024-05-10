/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 16:12:50 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/08 20:22:41 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	rev_rotate(t_list **head)
{
	t_list	*last;
	t_list	*temp;

	if (!(*head))
		return ;
	last = *head;
	while (last->next)
		last = last->next;
	temp = *head;
	while (temp->next->next)
		temp = temp->next;
	last->next = *head;
	temp->next = NULL;
	*head = last;
}

void	rra(t_list **a)
{
	rev_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	rev_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_printf("rrr\n");
}
