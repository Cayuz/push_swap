/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 12:14:15 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/05/02 19:23:57 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	word_counter(char *s, char c)
// {
// 	int	i;
// 	int	counter;
// 	int	check;

// 	i = 0;
// 	counter = 0;
// 	check = 1;
// 	while (s[i])
// 	{
// 		if (s[i] != c && check)
// 		{
// 			counter++;
// 			check = 0;
// 		}
// 		if (s[i] == c)
// 			check = 1;
// 		i++;
// 	}
// 	return (counter);
// }

// static int	char_counter(char *s, char c)
// {
// 	int	i;
// 	int	char_count;

// 	i = 0;
// 	char_count = 0;
// 	while (s[i])
// 	{
// 		while (s[i] != c && s[i])
// 		{
// 			char_count++;
// 			if (s[i + 1] == c || s[i + 1] == '\0')
// 				return (char_count);
// 			i++;
// 		}
// 		i++;
// 	}
// 	return (char_count);
// }

// static char	*make_word(char *s, char c)
// {
// 	int		char_count;
// 	char	*ptr;

// 	char_count = char_counter(s, c);
// 	ptr = malloc((char_count + 1) * sizeof(char));
// 	if (ptr == NULL)
// 		return (NULL);
// 	ft_strlcpy(ptr, s, char_count + 1);
// 	return (ptr);
// }

// static void	*free_it(char **ptr)
// {
// 	int	i;

// 	i = 0;
// 	while (ptr[i])
// 	{
// 		free(ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// 	return (NULL);
// }

// char	**ft_split(char *s, char c)
// {
// 	int		i;
// 	int		word_count;
// 	int		c_count;
// 	char	**arrays;

// 	printf("in split, %s\n", s);
// 	c_count = 0;
// 	i = 0;
// 	word_count = word_counter(s, c);
// 	if (word_count == 1)
// 		return (0);
// 	arrays = malloc((word_count + 1) * sizeof(char *));
// 	while (i < word_count)
// 	{
// 		while (s[c_count] == c)
// 			c_count++;
// 		arrays[i] = make_word(s + c_count, c);
// 		if (arrays[i] == NULL)
// 			return (free_it(arrays));
// 		s += char_counter(s, c) + c_count;
// 		i++;
// 		c_count = 0;
// 	}
// 	arrays[i] = (char *)'\0';
// 	return (arrays);
// }

static int	ft_words(char const *s, char c)
{
	unsigned int	i;
	int				words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	ft_free(char **arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	ft_letters(char const *s, char c, char **arr)
{
	unsigned int	b;
	unsigned int	e;
	int				words;

	b = 0;
	words = 0;
	while (s[b] && words < ft_words(s, c))
	{
		e = 0;
		while (s[b] == c)
			b++;
		while (s[b + e] != c && s[b + e] != '\0')
			e++;
		arr[words] = ft_substr(s, b, e);
		if (!arr[words])
		{
			ft_free(arr, ft_words(s, c));
			return (0);
		}
		b += e;
		words++;
	}
	return (1);
}

char	**ft_split(char *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)ft_calloc((ft_words(s, c) + 1), sizeof(char *));
	if (!arr)
		return (0);
	if (!(ft_letters(s, c, arr)))
		return (NULL);
	return (arr);
}
