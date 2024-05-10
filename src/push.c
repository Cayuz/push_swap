/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 15:38:21 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/08 19:54:08 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	push(t_list **original, t_list **new)
{
	t_list	*temp;

	if (*original == NULL)
		return ;
	temp = (*original)->next;
	(*original)->next = *new;
	*new = *original;
	*original = temp;
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_list **stack_b, t_list **stack_a)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}
