/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 17:05:58 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/06/20 14:38:44 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		convert string to interger

#include "libft.h"
#include <limits.h>
#include <stdio.h>

static int	get_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = get_sign(str[i++]);
	if (str[i] == '\0')
		ft_error();
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		if (result > INT_MAX || result < INT_MIN)
			ft_error();
		i++;
	}
	if (str[i] != '\0')
		ft_error();
	return (result * sign);
}
