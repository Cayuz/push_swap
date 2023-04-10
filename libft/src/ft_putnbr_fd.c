/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 15:39:43 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 13:03:49 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		displays number/integer on fd

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	long_n;

	long_n = n;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n *= -1;
	}
	if (long_n >= 10)
	{
		ft_putnbr_fd(long_n / 10, fd);
	}
	c = '0' + (long_n % 10);
	write(fd, &c, 1);
}
