/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 11:29:14 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 14:13:07 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		search for last occurance of c in s

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!(char)c)
	{
		return ((char *)s + i);
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
