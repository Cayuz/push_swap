/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/02 14:53:51 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/12 15:24:50 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_stack(int argc, char **argv)
{
	int		i;
	t_list	*a;
	char	**temp;

	i = 1;
	if (argc == 2)
	{
		temp = ft_split(argv[1], ' ');
		if (!temp || !temp[0])
			ft_error("Error");
		a = create_list(temp);
	}
	else
		while (i < argc)
		{
			a = create_list(argv + 1);
			i++;
		}
	return (a);
}

void	print_index_test(t_list **head_a)
{
	t_list	*link;

	link = *head_a;
	indexsort(&link);
	while (link != NULL)
	{
		ft_printf("%i", link->index);
		link = link->next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (argc < 2)
		return (0);
	a = create_stack(argc, argv);
	b = NULL;
	ft_dup(a);
	// print_list(a, 'a');
	print_index_test(&a);
	//sort
	free_lists(a);
	free_lists(b);
	return (0);
}
//maybe take out free lists