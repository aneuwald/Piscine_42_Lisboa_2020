/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:26:20 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/13 08:33:58 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (i < length)
		if (f(tab[i++]))
			count++;
	return (count);
}
