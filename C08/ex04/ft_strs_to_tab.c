/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:24:23 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/08 20:45:46 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void				str_cpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int					str_len(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	unsigned int	size;
	void			*temp;

	size = str_len(src);
	temp = malloc(sizeof(char) * size + 1);
	if (!temp)
		return (0);
	str_cpy(temp, src);
	return (temp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*stock_results;
	int				i;

	stock_results = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!stock_results)
		return (0);
	i = 0;
	while (i < ac)
	{
		stock_results[i].size = str_len(av[i]);
		stock_results[i].str = av[i];
		stock_results[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_results[i].str = 0;
	return (stock_results);
}
