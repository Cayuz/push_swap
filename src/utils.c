/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cavan-vl <cavan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 11:48:25 by cavan-vl      #+#    #+#                 */
/*   Updated: 2024/05/10 19:05:53 by cavan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"



t_list	*init_stack(int ac, char **av)
{
	t_list	*a;
	t_list	*temp;
	int		i;
	int		j;
	char	**numbers;

	a = NULL;
	i = 1;
	while (i < ac)
	{
		j = 0;
		numbers = ft_split(av[i], ' ');
		while (numbers[j])
		{
			if (!av[i][j])
				error_exit();
			check_digit(numbers[j]);
			temp = ft_lstnew(ft_atol(numbers[j]));
			ft_lstadd_back(&a, temp);
			j++;
		}
		i++;
		free_array(numbers);
	}
	return (a);
}

int	max_index(t_list *list)
{
	int		max;
	t_list	*temp;

	temp = list;
	max = INT_MIN;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}

bool	sort_check(t_list *a)
{
	while (a && a->next)
	{
		if (a->index > a->next->index)
			return (false);
		a = a->next;
	}
	return (true);
}
