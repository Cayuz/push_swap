/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 19:06:16 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 15:35:18 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack[i] == needle[j] && i < n)
			{
				i++;
				j++;
			}
			if (!needle[j])
				return ((char *)haystack + i - j);
			else
				i = i - j;
		}
		i++;
	}
	return (NULL);
}

//when no match: i - j to set i back to first character in haystack that 
//matched needle.
//when yes match: haystack + i - j to set ptr to the first character in haystack
//that matched needle.