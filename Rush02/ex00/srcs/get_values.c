/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 15:29:36 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 23:18:23 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_header.h"

void	get_usable_chars_count(char *str, int *counter)
{
	while (*str)
	{
		if (!is_space(*str) || (!is_space(*(str + 1)) && *(str + 1) != '\0'))
			*counter += 1;
		str++;
	}
}

char	*get_value(char *str)
{
	int		i;
	int		counter;
	char	*value;

	while (*str != ':')
		str++;
	while (is_space(*str) || *str == ':')
		str++;
	get_usable_chars_count(str, &counter);
	value = malloc(sizeof(char) * (counter + 1));
	i = 0;
	while (*str)
	{
		if (!is_space(*str) || (!is_space(*(str + 1)) && *(str + 1) != '\0'))
			value[i++] = *str;
		str++;
	}
	value[i] = '\0';
	return (value);
}

char	*get_key(char *str)
{
	int		i;
	int		counter;
	char	*key;

	counter = 0;
	while (str[counter] >= '0' && str[counter] <= '9')
		counter++;
	key = malloc(sizeof(char) * (counter + 1));
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		key[i] = str[i];
		i++;
	}
	key[i] = '\0';
	return (key);
}
