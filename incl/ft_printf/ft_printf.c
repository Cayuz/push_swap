/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/01 13:51:01 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/02/14 14:26:14 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_c(int c)
{
	int	x;

	x = write(1, &c, 1);
	return (x);
}

int	conversion(va_list arguments, char character)
{
	if (character == 'c')
		return (ft_put_c(va_arg(arguments, int)));
	else if (character == 's')
		return (ft_put_s(va_arg(arguments, char *)));
	else if (character == 'p')
		return (ft_put_p(va_arg(arguments, void *)));
	else if (character == 'i' || character == 'd')
		return (ft_put_num((va_arg(arguments, int))));
	else if (character == 'u')
		return (ft_put_u(va_arg(arguments, unsigned int), 10, character));
	else if (character == 'x' || character == 'X')
		return (ft_put_u(va_arg(arguments, unsigned int), 16, character));
	if (character == '%')
		return (ft_put_c('%'));
	return (0);
}

int	check_percent(const char *s, va_list arguments)
{
	int	i;
	int	length;
	int	x;

	i = 0;
	length = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			x = conversion(arguments, s[++i]);
			if (x == -1)
				return (-1);
			length += x;
		}
		else
		{
			x = ft_put_c(s[i]);
			if (x == -1)
				return (-1);
			length += x;
		}
		i++;
	}
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	arguments;
	int		length;

	va_start(arguments, str);
	length = check_percent(str, arguments);
	va_end(arguments);
	return (length);
}

// int	main(void)
// {
// 	int				r;
// 	int				r2;

// 	r = ft_printf("%d\n", 10);
// 	ft_printf("%i\n", r);
// 	r2 = printf("%d\n", 10);
// 	printf("%i\n", r2);
// }
