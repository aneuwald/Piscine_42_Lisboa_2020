/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 19:34:39 by egomes            #+#    #+#             */
/*   Updated: 2020/12/16 20:48:02 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bsq.h"

int		validade_firstline(t_ref *refs, char *firstline)
{
	int i;

	if (refs->full == refs->obstacle || refs->full == refs->empty
		|| refs->empty == refs->obstacle)
		return (0);
	if (refs->empty < 32)
		return (0);
	i = -1;
	while (firstline[++i])
		if (firstline[i] < '0' || firstline[i] > '9')
			return (0);
	if (refs->rows <= 0)
		return (0);
	return (1);
}

int		validade_mtrx(t_ref *refs)
{
	int i;
	int	j;
	int	count_empty;

	count_empty = 0;
	i = 0;
	refs->cols = ft_strlen(refs->mtrx[0]);
	while (refs->mtrx[i] != 0)
	{
		if (refs->cols != ft_strlen(refs->mtrx[i]))
			return (0);
		j = 0;
		while (refs->mtrx[i][j] != '\0')
		{
			count_empty += (refs->mtrx[i][j] == refs->empty) ? 1 : 0;
			if (refs->mtrx[i][j] != refs->obstacle &&
				refs->mtrx[i][j] != refs->empty)
				return (0);
			j++;
		}
		i++;
	}
	if (i != refs->rows || count_empty == 0)
		return (0);
	return (1);
}

int		populate_mtrx(t_ref *refs, char *buffer)
{
	char	*first_line;
	int		i;

	refs->mtrx = ft_split(buffer, "\n");
	free(buffer);
	if (!(refs->mtrx))
		return (0);
	first_line = refs->mtrx[0];
	refs->mtrx = refs->mtrx + 1;
	i = ft_strlen(first_line);
	if (i < 4)
		return (0);
	refs->full = first_line[--i];
	refs->obstacle = first_line[--i];
	refs->empty = first_line[--i];
	first_line[i] = '\0';
	refs->rows = ft_atoi(first_line);
	if (!validade_firstline(refs, first_line) || !validade_mtrx(refs))
		return (0);
	return (1);
}

int		initiate_data(t_ref *refs, char *filename)
{
	char	*buffer;

	refs->bigger = 0;
	refs->x_bigger = 0;
	refs->y_bigger = 0;
	if (!(buffer = read_file(filename)))
		return (0);
	if (!populate_mtrx(refs, buffer))
	{
		free_mtrx(refs->mtrx - 1);
		return (0);
	}
	return (1);
}

int		initiate_data_stdin(t_ref *refs, char *buffer)
{
	refs->bigger = 0;
	refs->x_bigger = 0;
	refs->y_bigger = 0;
	if (!populate_mtrx(refs, buffer))
	{
		free_mtrx(refs->mtrx - 1);
		return (0);
	}
	return (1);
}
