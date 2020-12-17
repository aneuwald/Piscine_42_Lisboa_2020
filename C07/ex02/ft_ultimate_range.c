/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:26:54 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/08 10:43:18 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		index;
	int		size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	range[0] = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	index = 0;
	while (min < max)
		range[0][index++] = min++;
	return (size);
}
