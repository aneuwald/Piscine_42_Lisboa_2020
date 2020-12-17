/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:06:17 by acanterg          #+#    #+#             */
/*   Updated: 2020/11/27 13:49:52 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int hold;

	i = 0;
	while (i < size)
	{
		hold = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = hold;
		i++;
		size--;
	}
}
