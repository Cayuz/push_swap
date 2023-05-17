/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 17:49:12 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/17 18:03:15 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	small_sort(t_list **a, t_list **b)
{
	// if (a->index < a->next->index)
	// {
	// 	if (a->next->next->index = 1)
	// 	{
	// 		rra(a);
	// 		sa(a);
	// 	}
	// 	else
	// 		rra(a);
	// }
	// if ()
	if ((a->index = 2 && a->next->index = 1) || a->index = 0 && a->next->index = 2)
	{
		rra(a);
		sa(a);
	}
	else if (a->index = 2 && a->next->index = 0)
		ra(a);
	else if (a->index = 1 && a->next->index = 0)
		sa(a);
}