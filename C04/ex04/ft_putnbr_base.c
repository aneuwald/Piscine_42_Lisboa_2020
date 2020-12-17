/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:43:37 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/07 18:24:54 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		base_is_invalid(char *base)
{
	int i;
	int m;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		m = i + 1;
		while (base[m])
			if (base[m++] == base[i])
				return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	holder;
	unsigned int	base_length;

	if (base_is_invalid(base))
		return ;
	base_length = ft_strlen(base);
	holder = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		holder = -nbr;
	}
	if (holder >= base_length)
	{
		ft_putnbr_base(holder / base_length, base);
		ft_putnbr_base(holder % base_length, base);
	}
	else
		write(1, &base[holder], 1);
}

int main()
{
	ft_putnbr_base(250, "246IZJ/");
}