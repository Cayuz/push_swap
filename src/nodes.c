/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nodes.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/05 18:18:50 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/20 14:17:09 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*create_node(int digit)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->value = digit;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}

t_list	*create_list(char **argv)
{
	t_list	*head;
	t_list	*tmp;
	t_list	*first;
	int		i;

	i = 0;
	if (argv == NULL)
		return (NULL);
	head = create_node((ft_atoi(argv[i])));
	if (head == NULL)
		return (NULL);
	first = head;
	while (argv[++i])
	{
		tmp = create_node((ft_atoi(argv[i])));
		if (tmp == NULL)
		{
			free_lists(first);
			return (NULL);
		}
		head->next = tmp;
		head = tmp;
	}
	return (first);
}
