/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/12 14:34:07 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/17 17:48:56 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexsort(t_list **stack)
{
	int		i;
	t_list	*current;
	t_list	*temp;

	i = 0;
	current = *stack;
	temp = *stack;
	while (current)
	{
		while (temp)
		{
			if (current->value < temp->value)
			temp->index++;
			temp = temp->next;
		}
		temp = *stack;
		current = current->next;
	}
}

static int	node_counter(t_list **stack)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = *stack;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

static int	is_sorted(t_list *a)
{
	while (a && a->next)
	{
		if (a->index > a->next->index)
			return (0);
		a = a->next;
	}
	return (1);
}

void	radix(t_list **a, t_list **b)
{
	int	i;
	int	bit;
	int	listsize;

	listsize = node_counter(a);
	bit = 1;
	while (!is_sorted(*a))
	{
		i = 0;
		while (i < listsize)
		{
			if ((*a)->index & bit)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		bit <<= 1;
		while (*b)
			pa(b, a);
	}
}
