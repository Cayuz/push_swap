/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_lists.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/25 18:25:59 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/04/25 18:34:17 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_lists(t_list *a, t_list *b)
{
	t_list	*temp;

	while (a)
	{
		temp = a->next;
		if (a)
			free(a);
		a = temp;
	}
	while (b)
	{
		temp = b->next;
		if (b)
			free(b);
		b = temp;
	}
}
