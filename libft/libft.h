/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 11:20:04 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/04/18 17:07:49 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include "../ft_printf/ft_printf.h"

/* ====		LIBFT FUNCTIONS		==== */

void	ft_bzero(char *str, int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);;
void	*ft_memmove(void *str1, const void *str2, size_t n);
int		ft_tolower(int i);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
int		ft_toupper(int c);
size_t	ft_strlen(const char *str);
int		ft_isalpha(int i);
int		ft_isascii(int c);
int		ft_isdigit(int i);
int		ft_isprint(int c);
int		ft_isalnum(char c);
void	*ft_memset(void *src, int c, unsigned int n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s_org);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char *s, char c);

/* ====		FT_PRINTF FUNCTIONS		==== */

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