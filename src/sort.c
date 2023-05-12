/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/12 14:34:07 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/12 14:50:58 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexsort(t_list **stack)
{
	int		i;
	t_list	*current;
	t_list	*second;

	i = 0;
	current = *stack;
	second = *stack;
	while (current)
	{
		while (second)
		{
			if (current->value < second->value)
				second->index++;
			second = second->next;
		}
		second = *stack;
		current = current->next;
	}
}
