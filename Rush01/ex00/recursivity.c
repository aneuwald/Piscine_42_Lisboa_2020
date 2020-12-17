/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursivity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 07:42:16 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/06 10:56:23 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

extern	int	g_grid[N][N];
int		is_valid(int row, int column);

int		put_next(int index, int value)
{
	int row;
	int col;

	row = index / N;
	col = index % N;
	if (index == 16)
		return (1);
	if (index != -1)
		g_grid[row][col] = value;
	if (index == -1 || is_valid(row, col))
	{
		if (put_next(index + 1, 1))
			return (1);
		if (put_next(index + 1, 2))
			return (1);
		if (put_next(index + 1, 3))
			return (1);
		if (put_next(index + 1, 4))
			return (1);
	}
	g_grid[row][col] = 0;
	return (0);
}
