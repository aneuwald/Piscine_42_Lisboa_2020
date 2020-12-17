/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 15:29:36 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 23:22:20 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_header.h"

void	populate_rows(t_dict *dictionary, char **splited)
{
	int i;

	i = 0;
	while (splited[i])
	{
		dictionary[i].key = get_key(splited[i]);
		dictionary[i].value = get_value(splited[i]);
		i++;
	}
	free_splited(splited);
	dictionary[i].key = 0;
	dictionary[i].value = 0;
}

int		check_colon(char *buffer)
{
	int		looking_colon;

	looking_colon = 1;
	while (*buffer)
	{
		if (*buffer == '\n' && (*(buffer + 1) < '0' || *(buffer + 1) > '9'))
			return (0);
		if (*buffer == ':')
		{
			if (looking_colon == 1)
				looking_colon = 0;
			else
				return (0);
		}
		else if (*buffer == '\n' || *buffer == '\0')
		{
			if (looking_colon == 0)
				looking_colon = 1;
			else
				return (0);
		}
		buffer++;
	}
	return (1);
}

t_dict	*populate_dict(char *file_name)
{
	t_dict	*dictionary;
	char	**splited;
	char	*buffer;

	if (!(buffer = read_file(file_name)))
		return (0);
	if (!check_colon(buffer))
	{
		free(buffer);
		return (0);
	}
	if (!(splited = ft_split(buffer, "\n")))
		return (0);
	free(buffer);
	if (!(dictionary = malloc(sizeof(t_dict) * (ft_count_words(splited) + 1))))
	{
		free_splited(splited);
		return (0);
	}
	populate_rows(dictionary, splited);
	dictionary = sort_dictionary(dictionary);
	return (dictionary);
}
