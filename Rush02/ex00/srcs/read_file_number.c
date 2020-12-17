/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 15:29:36 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 23:19:28 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_header.h"

int		only_zero_after(char *str)
{
	while (*str)
		if (*str++ != '0')
			return (FALSE);
	return (TRUE);
}

char	*read_number(t_dict *dictionary, char *nbr)
{
	int i;

	i = 0;
	while (*nbr == 0)
		nbr++;
	while (dictionary[i].key)
	{
		if (!ft_strcmp(dictionary[i].key, nbr))
			return (dictionary[i].value);
		i++;
	}
	return (NULL);
}

char	*read_file(char *file_name)
{
	int		fd;
	int		num_char;
	char	*buffer;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	num_char = 0;
	while (read(fd, &buffer, 1) > 0)
	{
		num_char++;
	}
	close(fd);
	fd = open(file_name, O_RDONLY);
	if (!(buffer = malloc(sizeof(char) * (num_char + 1))))
		return (0);
	read(fd, buffer, num_char);
	buffer[num_char] = '\0';
	close(fd);
	return (buffer);
}
