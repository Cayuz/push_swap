/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/01 15:40:43 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/02/14 14:21:56 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_s(char *s)
{
	int	i;
	int	x;

	i = 0;
	if (!s)
	{
		x = write(1, "(null)", 6);
		return (x);
	}
	while (s[i])
		i++;
	x = write(1, s, i);
	return (x);
}

int	ft_put_p(void *n)
{
	int	count;
	int	x;

	count = 0;
	x = write(1, "0x", 2);
	if (x == -1)
		return (-1);
	count += 2;
	if (n == 0)
	{
		x = write(1, "0", 1);
		if (x == -1)
			return (-1);
		count += 1;
		return (count);
	}
	count += ft_put_u((unsigned long long)n, 16, 'x');
	return (count);
}

int	ft_put_num(long int num)
{
	int			count;
	int			x;

	count = 0;
	if (num < 0)
	{
		x = write(1, "-", 1);
		if (x == -1)
			return (-1);
		count += 1;
		num *= -1;
	}
	if (num >= 10)
	{
		x = ft_put_num(num / 10);
		if (x == -1)
			return (-1);
		count += x;
		num = num % 10;
	}
	x = ft_put_c('0' + (num % 10));
	if (x == -1)
		return (-1);
	return (count += x);
}

int	ft_put_u_2(char c, int x, unsigned long long num)
{
	int	count;

	count = 0;
	if (c == 'x')
	{		
		x = ft_put_c(num + 87);
		if (x == -1)
			return (-1);
		count += x;
	}
	else if (c == 'X')
	{		
		x = ft_put_c(num + 55);
		if (x == -1)
			return (-1);
		count += x;
	}
	return (count);
}

int	ft_put_u(unsigned long long num, unsigned int base, char c)
{
	int	count;
	int	x;

	count = 0;
	if (num >= base)
	{
		x = ft_put_u((num / base), base, c);
		if (x == -1)
			return (-1);
		count += x;
		num = num % base;
	}
	if (num >= 0 && num <= 9)
	{
		x = ft_put_c(num + '0');
		if (x == -1)
			return (-1);
		count += x;
	}
	if (num >= 10 && num <= base)
		count += ft_put_u_2(c, x, num);
	return (count);
}
