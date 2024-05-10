/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/25 16:45:05 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/10 11:37:27 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	index_sort(t_list **list)
{
	int		i;
	t_list	*current;
	t_list	*temp;

	i = 0;
	current = *list;
	temp = *list;
	while (current)
	{
		while (temp)
		{
			if (current->value < temp->value)
				temp->index++;
			temp = temp->next;
		}
		temp = *list;
		current = current->next;
	}
}

static void	radix(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	bit;
	int	size;

	size = node_count(stack_a);
	bit = 1;
	while (!sort_check(*stack_a))
	{
		i = 0;
		while (i < size)
		{
			if ((*stack_a)->index & bit)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
			i++;
		}
		bit <<= 1;
		while (*stack_b)
			pa(stack_b, stack_a);
	}
}

static void	three_sort(t_list **stack_a)
{
	int	max;

	max = max_index(*stack_a);
	if ((*stack_a)->index == max)
		ra(stack_a);
	else if ((*stack_a)->next->index == max)
		rra(stack_a);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

static void	five_sort(t_list **stack_a, t_list **stack_b)
{
	int	count;

	count = node_count(stack_a);
	while (count--)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			pb(stack_b, stack_a);
		else
			ra(stack_a);
	}
	three_sort(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
	if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
}

void	sorts(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = node_count(stack_a);
	if (sort_check(*stack_a) || i <= 1)
		return ;
	if (i <= 3)
		three_sort(stack_a);
	else if (i <= 5)
		five_sort(stack_a, stack_b);
	else
		radix(stack_a, stack_b);
}
