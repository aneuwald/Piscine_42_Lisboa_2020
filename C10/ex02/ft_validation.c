/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:28:52 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/17 15:38:06 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	print_error_not_found(char *filename, char *arg)
{
	ft_putstr(basename(filename), 2);
	ft_putstr(": ", 2);
	ft_putstr(arg, 2);
	ft_putstr(": No such file or directory\n", 2);
}

void	print_error_arguments(char *filename)
{
	ft_putstr(basename(filename), 2);
	ft_putstr(": option requires an argument -- c\nusage: ", 2);
	ft_putstr(basename(filename), 2);
	ft_putstr(" [-F | -f | -r] [-q] ", 2);
	ft_putstr("[-b # | -c # | -n #] [file ...]\n", 2);
}

void	print_error_illegal(char *filename, char *arg)
{
	ft_putstr(basename(filename), 2);
	ft_putstr(": illegal offset -- ", 2);
	ft_putstr(arg, 2);
	ft_putstr("\n", 2);
}

int		only_numbers(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}

int		check_arguments(int ac, char **av)
{
	if (ac < 3)
	{
		print_error_arguments(av[0]);
		return (0);
	}
	if (ft_strlen(av[1]) != 2 || av[1][0] != '-' || av[1][1] != 'c')
		return (0);
	if (!only_numbers((av[2])))
	{
		print_error_illegal(av[0], (av[2] + 2));
		return (0);
	}
	return (1);
}
