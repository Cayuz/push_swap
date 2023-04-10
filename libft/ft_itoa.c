/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 14:05:37 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/30 12:02:21 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		converts int to string

#include "libft.h"

static int	n_count(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
	{
		counter++;
	}
	if (n < 0)
	{
		counter++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc (n_count(n) + 1, sizeof(char));
	if (str == 0)
		return (0);
	i = n_count(n) - 1;
	if (n == 0)
	{
		str[0] = '0';
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
