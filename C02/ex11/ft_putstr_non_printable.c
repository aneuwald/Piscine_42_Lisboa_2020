/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:14:15 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/01 14:24:48 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char			*hex;
	unsigned char	transformed;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			transformed = str[i];
			ft_putchar('\\');
			ft_putchar(hex[transformed / 16]);
			ft_putchar(hex[transformed % 16]);
		}
		i++;
	}
}
