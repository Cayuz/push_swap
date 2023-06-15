/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/25 18:25:59 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/05 17:30:13 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_lists(t_list *list)
{
	t_list	*temp;

	while (list)
	{
		temp = list->next;
		if (list)
			free(list);
		list = temp;
	}
}

int	node_counter(t_list **stack)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = *stack;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

int	max_index(t_list *stack)
{
	int		max;
	t_list	*tmp;

	tmp = stack;
	max = INT_MIN;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	return (max);
}
