/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/18 20:12:45 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/15 15:56:16 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
		exit(EXIT_FAILURE);
	check_input(av);
	stack_a = init_stack(ac, av);
	stack_b = NULL;
	check_dup(stack_a);
	index_sort(&stack_a);
	sorts(&stack_a, &stack_b);
	free_list(stack_a);
	free_list(stack_b);
	return (0);
}
