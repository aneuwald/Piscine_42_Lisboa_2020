/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 07:32:01 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/06 12:07:37 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define N 4

extern	int	g_grid[N][N];

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_matrix(void)
{
	int i;
	int j;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			put_char(g_grid[i][j] + '0');
			if (j != 3)
				put_char(' ');
			j++;
		}
		put_char('\n');
		i++;
	}
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}
