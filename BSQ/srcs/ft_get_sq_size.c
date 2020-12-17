/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sq_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:39:22 by pbatista          #+#    #+#             */
/*   Updated: 2020/12/16 13:29:12 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int		ft_get_sq_size(int row, int col, t_ref *refs)
{
	int i;
	int j;
	int c;

	c = 0;
	while (row + c < refs->rows && col + c < refs->cols &&
		refs->mtrx[row + c][col + c] != refs->obstacle)
	{
		i = col;
		while (i < col + c)
		{
			if (refs->mtrx[row + c][i] == refs->obstacle)
				return (c);
			i++;
		}
		j = row;
		while (j < row + c)
		{
			if (refs->mtrx[j][col + c] == refs->obstacle)
				return (c);
			j++;
		}
		c++;
	}
	return (c);
}

void	get_biggest_sq(t_ref *refs)
{
	int i;
	int j;
	int	biggest;

	i = 0;
	while (i < refs->rows)
	{
		j = 0;
		while (j < refs->cols)
		{
			biggest = ft_get_sq_size(i, j, refs);
			if (biggest > refs->bigger)
			{
				refs->bigger = biggest;
				refs->x_bigger = i;
				refs->y_bigger = j;
			}
			j++;
		}
		i++;
	}
}
