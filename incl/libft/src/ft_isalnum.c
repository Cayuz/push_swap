/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 13:29:57 by cvan-vli      #+#    #+#                 */
/*   Updated: 2022/11/29 12:56:49 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//		checks whether character is alphabetical or numerical

#include	<unistd.h>
#include	"libft.h"

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}
