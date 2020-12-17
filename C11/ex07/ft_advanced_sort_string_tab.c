/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 13:39:57 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/13 09:07:43 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		inverted;
	char	*holder;

	inverted = 1;
	while (inverted)
	{
		i = 0;
		inverted = 0;
		while (tab[++i])
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				holder = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = holder;
				inverted = 1;
			}
		}
	}
}
