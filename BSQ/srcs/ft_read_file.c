/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 18:43:44 by egomes            #+#    #+#             */
/*   Updated: 2020/12/16 19:39:20 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

char	*read_file(char *path)
{
	char	c;
	int		counter;
	char	*buffer;
	int		fd;

	counter = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (0);
	while (read(fd, &c, 1))
		counter++;
	close(fd);
	fd = open(path, O_RDONLY);
	if (!(buffer = malloc(sizeof(char) * (counter + 1))))
	{
		close(fd);
		return (0);
	}
	read(fd, buffer, counter);
	close(fd);
	buffer[counter] = '\0';
	return (buffer);
}
