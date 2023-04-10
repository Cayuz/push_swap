/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 17:13:12 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 16:38:02 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		return modified s with set taken from the front and back of s.
//		change s1 to start and end at the positions we just acquired from strchr
//		and then return that modified string.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, *s1))
	{
		s1++;
	}
	i = ft_strlen(s1);
	while (i != 0 && ft_strchr(set, s1[i]))
	{
		i--;
	}
	return (ft_substr(s1, 0, i + 1));
}
