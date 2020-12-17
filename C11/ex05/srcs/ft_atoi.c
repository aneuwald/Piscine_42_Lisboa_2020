/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 18:39:43 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/02 17:46:27 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c)
{
	int		i;
	char	*spaces;

	spaces = " \f\n\r\t\v";
	i = -1;
	while (spaces[++i] != '\0')
	{
		if (c == spaces[i])
			return (1);
	}
	return (0);
}

int		is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		is_signal(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int final_number;
	int mult;
	int i;

	i = 0;
	final_number = 0;
	mult = 1;
	while (is_space(*str) == 1)
		str++;
	while (is_signal(*str) == 1)
	{
		if (*str == '-')
			mult *= -1;
		str++;
	}
	while (is_number(*str) == 1)
	{
		final_number = (final_number * 10) + *str - '0';
		str++;
	}
	return (final_number * mult);
}
