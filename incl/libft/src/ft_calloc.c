/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 10:59:38 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/20 14:05:45 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		allocates room for an array for count elements of size size

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (int *)malloc(count * size);
	if (ptr == NULL)
	{
		ft_free_arr(ptr);
		return (NULL);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}
