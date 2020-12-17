/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:39:43 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/02 18:35:32 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		is_space(char c)
{
	int		i;
	char	*spaces;

	spaces = " \f\n\r\t\v";
	i = -1;
	while (spaces[++i] != '\0')
		if (c == spaces[i])
			return (1);
	return (0);
}

int		is_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i] != '\0')
		if (c == base[i])
			return (i + 1);
	return (0);
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

int		ft_atoi_base(char *str, char *base)
{
	int		mult;
	int		base_length;
	int		index;
	int		final_nbr;

	if (base_is_invalid(base))
		return (0);
	mult = 1;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mult *= -1;
		str++;
	}
	base_length = ft_strlen(base);
	while (is_in_base(*str, base) && *str)
	{
		index = is_in_base(*str++, base) - 1;
		final_nbr = final_nbr * base_length + index;
	}
	return (final_nbr * mult);
}
