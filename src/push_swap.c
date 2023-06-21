/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/02 14:53:51 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/21 13:26:18 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	part2(t_list **a, t_list *tmp)
{
	t_list	*last;

	if (*a == NULL)
	{
		*a = tmp;
		return ;
	}
	last = *a;
	while (last->next)
		last = last->next;
	last->next = tmp;
}

t_list	*create_stack(int argc, char **argv)
{
	t_list	*a;
	t_list	*tmp;
	int		i;
	int		j;
	char	**numbers;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (ft_isspace(argv[i][j]))
			j++;
		if (!argv[i][j])
			ft_error();
		numbers = ft_split(argv[i], ' ');
		tmp = create_list(numbers);
		ft_free_arr(numbers);
		if (!tmp)
			ft_error();
		part2(&a, tmp);
		i++;
	}
	return (a);
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
	indexsort(&a);
	ft_sort(&a, &b);
	free_lists(a);
	free_lists(b);
	return (0);
}
