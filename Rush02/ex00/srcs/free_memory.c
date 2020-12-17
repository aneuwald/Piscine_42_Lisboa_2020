/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:41:58 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 21:25:09 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_header.h"

void	free_dictionary(t_dict *dict)
{
	int i;

	i = 0;
	while (dict[i].key)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
	free(dict);
}

void	free_splited(char **splited)
{
	int i;

	i = 0;
	while (splited[i])
	{
		free(splited[i]);
		i++;
	}
	free(splited);
}
