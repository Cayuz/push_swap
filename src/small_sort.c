/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 17:49:12 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/05 14:50:19 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_sort(t_list **a, t_list **b)
{
	int	n;

	n = node_counter(a);
	while (n--)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
			pb(a, b);
		else
			ra(a);
	}
	three_sort(a);
	pa(b, a);
	pa(b, a);
	if ((*a)->index > (*a)->next->index)
		sa(a);
}

void	three_sort(t_list **a)
{
	int	max;

	max = max_index(*a);
	if ((*a)->index == max)
		ra(a);
	else if ((*a)->next->index == max)
		rra(a);
	if ((*a)->index > (*a)->next->index)
		sa(a);
}
