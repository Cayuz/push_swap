/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/12 14:34:07 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/15 17:38:47 by cvan-vli      ########   odam.nl         */
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

int	is_sorted(t_list *a)
{
	while (a && a->next)
	{
		if (a->index > a->next->index)
			return (0);
		a = a->next;
	}
	return (1);
}

void	ft_sort(t_list **a, t_list **b)
{
	int	i;

	i = node_counter(a);
	if (is_sorted(*a) || i <= 1)
		return ;
	if (i <= 3)
		three_sort(a);
	else if (i <= 5)
		five_sort(a, b);
	else
		radix(a, b);
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
