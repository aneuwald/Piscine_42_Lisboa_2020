/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:41:58 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 21:01:37 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_header.h"

void	ft_swap_dicts(t_dict *dict1, t_dict *dict2)
{
	t_dict	holder;

	holder = *dict1;
	*dict1 = *dict2;
	*dict2 = holder;
}

t_dict	*sort_dictionary(t_dict *dict)
{
	int		i;
	int		m;
	int		len_1;
	int		d;

	i = 0;
	while (dict[i].key)
	{
		len_1 = ft_strlen(dict[i].key);
		m = i + 1;
		while (dict[m].key)
		{
			d = len_1 - ft_strlen(dict[m].key);
			if (ft_strcmp(dict[i].key, dict[m].key) == 0)
				return (0);
			if (d > 0 || (d == 0 && ft_strcmp(dict[i].key, dict[m].key) > 0))
				ft_swap_dicts(&dict[i], &dict[m]);
			m++;
		}
		i++;
	}
	return (dict);
}
