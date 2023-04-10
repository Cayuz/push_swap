/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 11:53:10 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 17:39:15 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s_org)
{
	int		s_org_len;
	char	*s_dup;
	int		i;

	s_org_len = ft_strlen(s_org);
	s_dup = (char *)ft_calloc(s_org_len + 1, sizeof(char));
	if (s_dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < s_org_len)
	{
		s_dup[i] = s_org[i];
		i++;
	}
	return (s_dup);
}
