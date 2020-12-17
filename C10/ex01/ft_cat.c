/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 01:12:10 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/16 08:55:45 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putstr(char *str, int fildes)
{
	while (*str)
		write(fildes, str++, 1);
}

void	print_not_found(char *program, char *argument, int error)
{
	ft_putstr(basename(program), 2);
	ft_putstr(": ", 2);
	ft_putstr(argument, 2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(error), 2);
	ft_putstr("\n", 2);
}

void	print_file(int fd, int i, char **av)
{
	char	c;
	int		r;

	while ((r = read(fd, &c, 1)))
	{
		if (r < 0)
		{
			print_not_found(av[0], av[i], EISDIR);
			break ;
		}
		write(1, &c, 1);
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	c;
	int		fd;

	i = 1;
	if (argc == 1)
	{
		while (read(0, &c, 1))
			write(1, &c, 1);
		return (0);
	}
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			print_not_found(argv[0], argv[i], ENOENT);
		else
			print_file(fd, i, argv);
		close(fd);
		i++;
	}
}
