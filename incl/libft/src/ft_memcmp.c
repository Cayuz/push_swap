/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 18:50:37 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/28 18:49:13 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		compare strings.

#include "libft.h"
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n && (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
	{
		n--;
		i++;
	}
	if (n != 0)
	{
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}

//1:	it checks if the character at place 'i' of string 1 and string 2 is the
//		same. while doing that, it increments i and decrements n.
//2:	if it finds a character at place 'i' in s1 and s2 that is not the same,
//		it will send back the difference between those two characters IF n is 
//		not 0. if it would be 0, it returns 0. this is because it only checks 
//		for n characters long.