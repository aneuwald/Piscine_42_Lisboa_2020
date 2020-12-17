/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:40:17 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/04 10:51:41 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort_argv(char **str, int size)
{
	int		i;
	int		m;
	char	*hold;

	i = 1;
	while (i < size)
	{
		m = i + 1;
		while (m < size)
		{
			if (ft_strcmp(str[i], str[m]) > 0)
			{
				hold = str[i];
				str[i] = str[m];
				str[m] = hold;
			}
			m++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int i;

	sort_argv(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		write(1, "\n", 1);
	}
}
