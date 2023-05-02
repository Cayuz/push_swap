/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/25 18:25:59 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/02 12:48:34 by cvan-vli      ########   odam.nl         */
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
	// while (b)
	// {
	// 	temp = b->next;
	// 	if (b)
	// 		free(b);
	// 	b = temp;
	// }
}

void	ft_error(void)
{
	write(STDERR_FILENO, "Error\n", 6);
	exit(1);
}
