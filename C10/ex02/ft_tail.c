/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 01:12:10 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/17 15:49:28 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

#include <stdio.h>

int		get_file_size(char *program, char *filename)
{
	int		fd;
	int		counter;
	char	c;

	counter = 0;
	if ((fd = open(filename, O_RDONLY)) < 0)
	{
		print_error_not_found(program, filename);
		return (0);
	}
	else
		while (read(fd, &c, 1))
			counter++;
	return (counter);
}

void	print_header(char *header)
{
	ft_putstr("==> ", 1);
	ft_putstr(header, 1);
	ft_putstr(" <==\n", 1);
}

void	print_files(char *program, char **files, int bytes, int print_names)
{
	int		size;
	int		fd;
	int		i;
	int		is_first;
	char	c;

	is_first = 0;
	while (*files)
	{
		i = 0;
		if ((size = get_file_size(program, *files)))
		{
			if (print_names && is_first++)
				write(1, "\n", 1);
			if (print_names)
				print_header(*files);
			fd = open(*files, O_RDONLY);
			while (read(fd, &c, 1))
				if (i++ >= size - bytes)
					write(1, &c, 1);
		}
		files++;
	}
}

void	print_stdin(int num_bytes)
{
	char	buffer[4096000];
	int		i;
	int		start;

	i = 0;
	while (read(0, &buffer[i], 1))
		if (buffer[i++] == '\n')
			continue;
	buffer[i] = '\0';
	start = i - num_bytes < 0 ? 0 : i - num_bytes;
	while (start < i)
		write(1, &buffer[start++], 1);
}

int		main(int argc, char **argv)
{
	int		num_bytes;
	int		print_names;
	char	**files;

	if (!check_arguments(argc, argv))
		return (0);
	num_bytes = ft_atoi(argv[2]);
	if (argc > 3)
	{
		print_names = (argc > 4) ? 1 : 0;
		files = argv + 3;
		print_files(argv[0], files, num_bytes, print_names);
	}
	else
	{
		print_stdin(num_bytes);
	}
}
