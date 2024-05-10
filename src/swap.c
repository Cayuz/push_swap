/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 16:33:46 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/08 20:36:31 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	swap(t_list **head)
{
	t_list	*temp;
	t_list	*first;

	if (!head || !(*head)->next)
		return ;
	first = (*head)->next;
	temp = (*head)->next;
	(*head)->next = temp->next;
	temp->next = *head;
	*head = first;
}

void	sa(t_list **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_list **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
