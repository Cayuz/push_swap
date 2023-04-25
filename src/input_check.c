/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cvan-vli <cvan-vli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/23 12:54:16 by cvan-vli      #+#    #+#                 */
/*   Updated: 2023/04/25 11:42:21 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

/*	CHECK INPUT:
	MIN/MAX? */

void	ft_error(void)
{
	write(STDERR_FILEN0, "Error\n", 6);
	exit(1);
}

int	ft_checkdigit(int *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			ft_error();
		i++;
	}
	return (0);
}

int	ft_dup(int *arg, int num)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == num)
			ft_error();
		i++;
	}
	return (0);
}

int	ft_min_max(int *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] <= INT_MIN || arg[i] >= INT_MAX)
			ft_error();
		i++;
	}
	return (0);
}

data type	ft_check(char *arg)
{
	geef argv door als string aan de checker functies.
	gebruik de check functies in een while loop/if statement.
	return nul als het allemaal goed gaat?
	iets met atoi?

	
}
