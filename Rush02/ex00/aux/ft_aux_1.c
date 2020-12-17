/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:56:48 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 22:06:58 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_count_words(char **matrix)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (matrix[i++])
		count++;
	return (count);
}

int		ft_count_char(char c, char *str)
{
	int count;

	count = 0;
	while (*str)
		if (*(str++) == c)
			count++;
	return (count);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str, int fildes)
{
	int i;

	i = 0;
	while (str[i])
		write(fildes, &str[i++], 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	holder;

	holder = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		holder = -nb;
	}
	if (holder >= 10)
	{
		ft_putnbr(holder / 10);
		ft_putnbr(holder % 10);
	}
	else
		ft_putchar(holder + '0');
}
