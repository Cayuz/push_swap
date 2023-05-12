/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 17:05:58 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/12 15:45:15 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		convert string to interger

#include "libft.h"
#include <limits.h>

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
	{
		sign = get_sign(str[i]);
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			ft_error("Error");
		if (result > INT_MAX || result < INT_MIN)
			ft_error("Error");
		i++;
	}
	return (result * sign);
}
