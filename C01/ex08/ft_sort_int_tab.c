/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:06:17 by acanterg          #+#    #+#             */
/*   Updated: 2020/11/27 15:59:53 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int	m;
	int hold;

	i = 0;
	while (i < size)
	{
		m = i + 1;
		while (m < size)
		{
			if (tab[i] > tab[m])
			{
				hold = tab[i];
				tab[i] = tab[m];
				tab[m] = hold;
			}
			m++;
		}
		i++;
	}
}
