/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:36:17 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/10 18:54:25 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_mtrx[10][10];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_queens(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (g_mtrx[i][j] == 0)
		{
			i++;
		}
		ft_putchar(i + '0');
		j++;
	}
	ft_putchar('\n');
}

int		is_place_valid(int row, int col)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (row - j >= 0 && col - i >= 0)
	{
		if (g_mtrx[row - j++][col - i++] == 1)
			return (0);
	}
	i = 0;
	while (i < col)
	{
		if (g_mtrx[row][i++] == 1)
			return (0);
	}
	i = 1;
	j = 1;
	while (row + j < 10 && col - i >= 0)
	{
		if (g_mtrx[row + j++][col - i++] == 1)
			return (0);
	}
	return (1);
}

void	putqueens(int col, int *counter)
{
	int row;

	if (col == 10)
	{
		print_queens();
		*counter += 1;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_place_valid(row, col))
		{
			g_mtrx[row][col] = 1;
			putqueens(col + 1, counter);
			g_mtrx[row][col] = 0;
		}
		row++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int	counter;

	counter = 0;
	putqueens(0, &counter);
	return (counter);
}
