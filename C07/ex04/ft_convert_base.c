/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:34:16 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/09 09:20:54 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calc_holder(char *nbr, char *base_from);
void	putnbr_base(char *final_string, int *pos, int holder, char *base_to);

int		is_space(char c)
{
	int		i;
	char	*spaces;

	spaces = " \f\n\r\t\v";
	i = -1;
	while (spaces[++i])
		if (c == spaces[i])
			return (1);
	return (0);
}

int		base_is_invalid(char *base)
{
	int i;
	int m;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || is_space(base[i]))
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		mult;
	int		holder;
	int		pos;
	char	*final_str;

	if (base_is_invalid(base_from) || base_is_invalid(base_to))
		return (0);
	while (is_space(*nbr))
		nbr++;
	mult = 1;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			mult *= -1;
		nbr++;
	}
	holder = calc_holder(nbr, base_from) * mult;
	final_str = malloc(sizeof(char) * 34);
	pos = 0;
	putnbr_base(final_str, &pos, holder, base_to);
	final_str[pos] = '\0';
	return (final_str);
}
