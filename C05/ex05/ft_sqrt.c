/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:36:17 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/03 15:10:13 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	long int result;

	result = nb / 2;
	if (nb < 0)
		return (0);
	while ((result * result) > nb)
	{
		result = result / 2;
	}
	while ((result * result) <= nb)
	{
		if (result * result == nb)
			return (result);
		else if (result * result > nb)
			return (0);
		result++;
	}
	return (0);
}
