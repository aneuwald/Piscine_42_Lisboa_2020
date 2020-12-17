/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:44:39 by egomes            #+#    #+#             */
/*   Updated: 2020/12/16 19:35:54 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_mtrx(char **mtrx)
{
	int i;

	i = 0;
	while (mtrx[i])
		free(mtrx[i++]);
	free(mtrx);
}

void	print_final_mtrx(t_ref *refs)
{
	int i;
	int j;

	i = 0;
	while (i < refs->rows)
	{
		j = 0;
		while (j < refs->cols)
		{
			if (j >= refs->y_bigger && j < refs->y_bigger + refs->bigger
				&& i >= refs->x_bigger && i < refs->x_bigger + refs->bigger)
				ft_putchar(refs->full, 1);
			else
				ft_putchar(refs->mtrx[i][j], 1);
			j++;
		}
		ft_putchar('\n', 1);
		i++;
	}
}

void	calc_matrix(t_ref *refs)
{
	get_biggest_sq(refs);
	print_final_mtrx(refs);
	free_mtrx(refs->mtrx - 1);
}

void	print_stdin(t_ref *refs)
{
	char	*buffer;
	int		i;

	i = 0;
	if (!(buffer = malloc(sizeof(char) * 819200)))
	{
		ft_putstr("map error\n", 2);
		return ;
	}
	while (read(0, &buffer[i], 1))
	{
		if (i > 819198)
		{
			free(buffer);
			ft_putstr("map error\n", 2);
			return ;
		}
		if (buffer[i++] == '\n')
			continue;
	}
	buffer[i] = '\0';
	if (!initiate_data_stdin(refs, buffer))
		ft_putstr("map error\n", 2);
	else
		calc_matrix(refs);
}

int		main(int argc, char **argv)
{
	t_ref	refs;
	int		i;

	if (argc == 1)
	{
		print_stdin(&refs);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (!initiate_data(&refs, argv[i]))
			ft_putstr("map error\n", 2);
		else
			calc_matrix(&refs);
		i++;
	}
}
