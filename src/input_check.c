/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/23 12:54:16 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/04/25 18:37:36 by cvan-vli      ########   odam.nl         */
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
			free_lists(a, b);
		}
		a = a->next;
	}
	return (1);
}

int	ft_dup(t_list *a)
{
	t_list	*first;
	t_list	*num;

	first = a;
	num = a->next;
	while (num)
	{
		a = first;
		while (a)
		{
			if (num->value == a->value && num != a)
			{
				ft_error();
				free_lists(a, b);
			}
			a = a->next;
		}
		num = num->next;
	}
	return (1);
}

// int	ft_min_max(t_list *a)
// {
// 	int	i;

// 	i = 0;
// 	while (a[i])
// 	{
// 		if (a[i] <= INT_MIN || a[i] >= INT_MAX)
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }
/*	geef argv door als string aan de checker functies.
	gebruik de check functies in een while loop/if statement.
	return nul als het allemaal goed gaat?
	iets met atoi?*/

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
