/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/09 11:45:32 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/09 16:55:37 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*==============================================================================
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
==============================================================================*/

void	push(t_list **org, t_list **new)
{
	t_list	temp;

	if (!*org)
		return ;
	temp = (*org)->next;
	(*org)->next = *new;
	*new = *org;
	*org = temp; 
}

void	pa(t_list **a)
{
	push(a);
	ft_putendl("pa");
}

void	pb(t_list **b)
{
	push(b);
	ft_putendl("pb");
}

void	pp(t_list **a, t_list **b)
{
	push(a);
	push(b);
	ft_putendl("pp");
}
