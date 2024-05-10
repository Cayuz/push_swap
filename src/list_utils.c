/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_utils.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 14:43:48 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/08 17:51:58 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	*create_node(int digit)
{
	t_list	*node;

	node = (t_list *)ft_malloc(sizeof(t_list));
	node->value = digit;
	node->index = 0;
	node->next = NULL;
	return (node);
}

t_list	*create_list(char **av)
{
	t_list	*head;
	t_list	*temp;
	t_list	*first;
	int		i;

	i = 0;
	if (av == NULL)
		return (NULL);
	head = create_node(ft_atoi(av[i]));
	if (head == NULL)
		return (NULL);
	first = head;
	while (av[++i] != NULL)
	{
		temp = create_node(ft_atoi(av[i]));
		if (temp == NULL)
		{
			free_list(first);
			return (NULL);
		}
		head->next = temp;
		head = temp;
	}
	return (first);
}
