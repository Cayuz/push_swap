/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nodes.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/05 18:18:50 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/04/08 17:20:09 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ==== create the first node of the list, and send to link it to another newly
created node ==== */
t_list	*create_list(char *argv[])
{
	t_list	*a;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (i == 0)
			a = create_node((ft_atoi(argv[i])));
		else if (a == NULL)
			return (NULL);
		else
			link_node(a, create_node(ft_atoi(argv[i])));
		i++;
	}
	return (a);
}

/* ==== create a new node ==== */
t_list	*create_node(int digit)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->value = digit;
	new_node->next = NULL;
	return (new_node);
}

/* ==== link the current node to the next node ==== */
int	link_node(t_list *curr_node, t_list *next_node)
{
	if (curr_node == NULL || next_node == NULL)
		return (0);
	while (curr_node->next != NULL)
		curr_node = curr_node->next;
	curr_node->next = next_node;
	return (1);
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
