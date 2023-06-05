/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:05:16 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/28 16:16:38 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		erases n data of starting point of str by writing '\0'.

#include "libft.h"

void	ft_bzero(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
