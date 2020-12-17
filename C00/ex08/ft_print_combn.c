/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:54:53 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/10 13:13:03 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_first(char *comb, int final_pos)
{
	int		i;
	char	*base;

	base = "0123456789";
	i = 0;
	while (i < final_pos)
	{
		if (comb[i] != base[i])
			return (0);
		i++;
	}
	return (1);
}

void	print_combs(char *arr, int final_pos)
{
	int i;

	i = 0;
	if (!ft_is_first(arr, final_pos))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	while (i < final_pos)
	{
		ft_putchar(arr[i++]);
	}
}

void	check_combination(int n, char *arr, int value, int pos)
{
	if (n == 0)
		print_combs(arr, pos);
	else
		while (value < 11 - n)
		{
			arr[pos] = value + '0';
			check_combination(n - 1, arr, value + 1, pos + 1);
			value++;
		}
}

void	ft_print_combn(int n)
{
	char	array[n];

	if (n <= 0 || n >= 10)
		return ;
	check_combination(n, array, 0, 0);
}

int main()
{
	ft_print_combn(9);
}