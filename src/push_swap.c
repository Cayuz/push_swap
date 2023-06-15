/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/02 14:53:51 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/15 15:22:04 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_stack(int argc, char **argv)
{
	int		i;
	t_list	*a;
	char	**tmp;

	i = 1;
	a = NULL;
	printf("%s", "Stack:\n");
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		if (!tmp || !tmp[0])
			ft_error();
		a = create_list(tmp);
		printf("|%s|%p\n", *tmp, a);
		ft_free_arr(tmp);
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
	print_index_test(&a);
	print_list(a, 'a'); //DELETE THIS!!!!
	free_lists(a);
	free_lists(b);
	return (0);
}
