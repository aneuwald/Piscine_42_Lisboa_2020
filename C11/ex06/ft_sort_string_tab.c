/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 13:39:57 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/13 08:43:01 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		m;
	char	*hold;

	i = 0;
	while (tab[i])
	{
		m = i + 1;
		while (tab[m])
		{
			if (ft_strcmp(tab[i], tab[m]) > 0)
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
