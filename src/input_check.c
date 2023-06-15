/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/23 12:54:16 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/05 17:17:49 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ==== incorporate function into another one?*/

int	ft_dup(t_list *head)
{
	t_list	*first;
	t_list	*num;

	first = head;
	num = head->next;
	while (num)
	{
		head = first;
		while (head)
		{
			if (num->value == head->value && num != head)
			{
				ft_error();
				free_lists(head);
			}
			head = head->next;
		}
		num = num->next;
	}
	return (1);
}
