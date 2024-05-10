/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/10 18:36:47 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/10 19:40:38 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	check_digit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (s[i] == '-')
			i++;
		if (!ft_isdigit(s[i]))
			error_exit();
		i++;
	}
}

void	check_dup(t_list *head)
{
	t_list	*next;
	t_list	*temp;

	temp = head;
	next = head->next;
	while (next)
	{
		temp = head;
		while (temp)
		{
			if (next->value == temp->value && next != temp)
			{
				free_list(head);
				error_exit();
			}
			temp = temp->next;
		}
		next = next->next;
	}
}

void	check_input(char **input)
{
	int		i;
	long	digit;

	i = 1;
	while(input[i])
	{
		check_digit(input[i]);
		digit = ft_atol(input[i]);
		if (digit > INT_MAX || digit < INT_MIN)
			error_exit();
		i++;
	}
}
