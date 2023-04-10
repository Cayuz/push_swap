/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 13:54:18 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 17:40:08 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		sets fixed number of (n) characters of src to c

#include "libft.h"

void	*ft_memset(void *src, int c, unsigned int n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)src)[i] = (unsigned char)c;
		i++;
	}
	return (src);
}
