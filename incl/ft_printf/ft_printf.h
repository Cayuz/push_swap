/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 14:28:32 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/02/14 14:21:49 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		check_percent(const char *s, va_list arguments);
int		conversion(va_list arguments, char character);
int		ft_put_c(int c);
int		ft_put_s(char *s);
int		ft_put_num(long int n);
int		ft_put_u(unsigned long long n, unsigned int base, char c);
int		ft_put_u_2(char c, int x, unsigned long long num);
int		ft_put_p(void *n);

#endif