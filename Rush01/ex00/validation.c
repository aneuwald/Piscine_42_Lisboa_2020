/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 07:38:39 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/06 11:07:50 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define N 4

extern	int	g_grid[N][N];
extern	int g_params[N][N];

int		valid_duplicated(int row, int column)
{
	int i;

	i = -1;
	while (++i < column)
		if (g_grid[row][i] == g_grid[row][column])
			return (0);
	i = -1;
	while (++i < row)
		if (g_grid[i][column] == g_grid[row][column])
			return (0);
	return (1);
}

int		get_view(int line[])
{
	int i;
	int view;
	int tallest;

	i = 1;
	view = 1;
	tallest = line[0];
	while (i < N && tallest != N)
	{
		if (line[i] > tallest)
		{
			view++;
			tallest = line[i];
		}
		i++;
	}
	return (view);
}

int		valid_vertical(int column)
{
	int up;
	int down;
	int line[N];
	int	inverted_line[N];

	line[0] = g_grid[0][column];
	line[1] = g_grid[1][column];
	line[2] = g_grid[2][column];
	line[3] = g_grid[3][column];
	up = get_view(line);
	if (up != g_params[0][column])
		return (0);
	inverted_line[0] = line[3];
	inverted_line[1] = line[2];
	inverted_line[2] = line[1];
	inverted_line[3] = line[0];
	down = get_view(inverted_line);
	if (down != g_params[1][column])
		return (0);
	return (1);
}

int		valid_horizontal(int row)
{
	int right;
	int left;
	int	inverted_line[4];

	left = get_view(g_grid[row]);
	if (left != g_params[2][row])
		return (0);
	inverted_line[0] = g_grid[row][3];
	inverted_line[1] = g_grid[row][2];
	inverted_line[2] = g_grid[row][1];
	inverted_line[3] = g_grid[row][0];
	right = get_view(inverted_line);
	if (right != g_params[3][row])
		return (0);
	return (1);
}

int		is_valid(int row, int column)
{
	if (!valid_duplicated(row, column))
		return (0);
	if (row == N - 1)
		if (!valid_vertical(column))
			return (0);
	if (column == N - 1)
		if (!valid_horizontal(row))
			return (0);
	return (1);
}
