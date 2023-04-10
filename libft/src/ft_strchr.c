/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vl <cvan-vl@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 13:25:59 by cvan-vl      #+#    #+#                 */
/*   Updated: 2022/10/25 13:52:01 by cvan-vl      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		searches first occurance of c in s

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char)c == '\0')
	{
		return ((char *)s + ft_strlen(s));
	}
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
