/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/23 12:54:16 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/02 12:49:53 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include "push_swap.h"

/*	CHECK INPUT:
	MIN/MAX? */

int	ft_checkdigit(t_list *a)
{
	while (a)
	{
		if (!ft_isdigit(a->value))
		{
			ft_error();
			free_lists(a);
		}
		a = a->next;
	}
	return (1);
}

int	ft_dup(t_list *head, t_list *b)
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

/*	
	
	*/

// void	ft_check(t_list *a)
// {
// 	int	i;

// 	i = 0;
// 	while (a[i])
// 	{
// 		if (!ft_dup(a[i]) || !ft_min_max(a[i]) || !ft_checkdigit(a[i]))
// 			ft_error();
// 		i++;
// 	}
// }
