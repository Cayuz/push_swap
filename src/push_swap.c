/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/02 14:53:51 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/02 19:21:30 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_stack(int argc, char **argv)
{
	int		i;
	t_list	*a;
	char	**temp;

	i = 1;
	/*if argc == 2,
		check if it's string or a single digit. if it is a single digit
		-> error*/
	while (i < argc)
	{
		temp = ft_split(argv[i], ' ');
		if (!temp || !temp[0])
		{
			printf("here\n");
			ft_error();
			//free_lists(a);
		}
		a = create_list(temp);
		//free(temp);
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
	print_list(a, 'a');
	//ft_check(a);
	//sort
	free_lists(a);
	free_lists(b);
	return (0);
}
//maybe take out free lists