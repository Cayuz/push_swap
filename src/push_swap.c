/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/02 14:53:51 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/01 16:38:58 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_stack(int argc, char **argv, t_list *a, t_list *b)
{
	int	i;

	i = 0;
	/*if argc == 2,
		check if it's string or a single digit. if it is a single digit
		-> error*/
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (argv == NULL)
		{
			ft_error();
			free_lists(a, b);
		}
		a = create_list(argv);
	}
	else
	{
		argv += 1;
		a = create_list(argv);
	}
	return (a);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	if (argc < 2)
		return (0);
	a = create_stack(argc, argv, a, b);
	b = NULL;
	print_list(a, 'a');
	ft_dup(a, b);
	ft_checkdigit(a);
	//ft_check(a);
	//sort
	free_lists(a, b);
	return (0);
}
