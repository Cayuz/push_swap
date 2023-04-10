/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 13:29:41 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 16:40:32 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//calculates length of a string.

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
