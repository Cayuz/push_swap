/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/25 18:25:59 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/17 16:51:32 by cvan-vli      ########   odam.nl         */
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

void	ft_error(char *msg)
{
	ft_putendl(msg);
	exit(1);
}
