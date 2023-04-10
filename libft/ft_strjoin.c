/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 16:21:55 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 17:31:01 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//concatenates s1 and s2 and puts the result in a new string.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;

	new_string = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_string == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(new_string, s1, (ft_strlen(s1) + 1));
	ft_strlcat(new_string, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (new_string);
}
