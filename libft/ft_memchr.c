/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 18:23:20 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/25 14:41:03 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//search for a character in a string that does not have to be null terminated in
//the sense that it searches for n characters instead of till the end of the 
//string.

#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((unsigned char *)s + i);
		}
		i++;
	}
	return (0);
}
