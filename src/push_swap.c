/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/02 14:53:51 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/04/23 14:48:33 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*first_check(int argc, char **argv, t_list *a)
{
	int		i;

	i = 0;
	if (argc == 1)
		ft_error();
	/*if argc == 2, check if it's string or a single digit. if it is a single digit -> error*/
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (argv == NULL)
			ft_error();
		a = create_list(argv);
	}
	else if (argc > 2)
	{
		argv += 1;
		a = create_list(argv);
	}
	return (a);
}


/* Use ft_isdigit, ft_atoi, */


int	main(int argc, char *argv[])
{
	t_list	*a = NULL;

	a = first_check(argc, argv, a);
	print_list(a, 'a');
	return (0);
}
