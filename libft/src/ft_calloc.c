/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 10:59:38 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/28 18:42:40 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		allocates room for an array for count elements of size size

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (int *)malloc(count * size);
	if (ptr == 0)
	{
		return (0);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}
