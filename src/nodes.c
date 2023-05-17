/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nodes.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/05 18:18:50 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/17 17:02:59 by cvan-vli      ########   odam.nl         */
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

	i = 1;
	head = create_node((ft_atoi(argv[0])));
	if (head == NULL)
			return (NULL);
	first = head;
	while (argv[i])
	{
		tmp = create_node((ft_atoi(argv[i])));
		if (tmp == NULL)
		{
			// free_list(first);
			return (NULL);
		}
		head->next = tmp;
		head = head->next;
		i++;
	}
	return (first);
}

/* ==== DELETE BOTH! ==== */
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

void	print_index_test(t_list **head_a)
{
	t_list	*tmp;

	tmp = *head_a;
	while (tmp != NULL)
	{
		ft_printf("%i", tmp->index);
		tmp = tmp->next;
	}
}