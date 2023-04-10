/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 12:54:44 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 16:34:40 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	s_length;

	s_length = ft_strlen(s);
	if (s == NULL)
	{
		return (NULL);
	}
	if (start + len > s_length)
	{
		len = s_length - start;
	}
	if (start > s_length)
	{
		return (ft_strdup(""));
	}
	s2 = malloc((len + 1) * sizeof(char));
	if (s2 == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}
