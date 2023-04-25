/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nodes.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/05 18:18:50 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/04/25 17:37:19 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ==== create a new node ==== */
static t_list	*create_node(int digit)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->value = digit;
	new_node->next = NULL;
	return (new_node);
}

/* ==== create the first node of the list, and send to link it to another newly
created node ==== */
t_list	*create_list(char **argv)
{
	t_list	*a;
	t_list	*tmp;
	t_list	*first;
	int		i;

	i = 1;
	a = create_node((ft_atoi(argv[0])));
	if (a == NULL)
			return (NULL);
	first = a;
	while (argv[i])
	{
		tmp = create_node((ft_atoi(argv[i])));
		if (tmp == NULL)
		{
			// free_list(first);
			return (NULL);
		}
		a->next = tmp;
		a = a->next;
		i++;
	}
	return (first);
}

/* ==== DELETE! ==== */
void	print_list(t_list *node, int stack)
{
	printf("%c\n", stack);
	while (node != NULL)
	{
		printf("%p -> ", node);
		printf("\e[0;32m%d\e[0m : ", node->value);
		printf("[%p]\n", node->next);
		node = node->next;
	}
	printf("\n");
}
