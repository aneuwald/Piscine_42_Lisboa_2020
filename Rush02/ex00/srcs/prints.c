/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 09:29:24 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 23:31:33 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_header.h"

int		is_direct_entry(t_dict *dictionary, char *nbr)
{
	char	*final_word;
	char	uni[2];
	int		len;

	uni[1] = '\0';
	final_word = read_number(dictionary, nbr);
	if (final_word)
	{
		len = ft_strlen(nbr);
		if (len > 2 && nbr[0] == '1' && only_zero_after(nbr + 1))
		{
			uni[0] = nbr[0];
			ft_putstr(read_number(dictionary, uni), 1);
			ft_putstr(" ", 1);
		}
		ft_putstr(final_word, 1);
		ft_putstr("\n", 1);
		return (TRUE);
	}
	return (FALSE);
}

void	print_first(t_dict *dictionary, char next_nbr[3], int *print)
{
	char	chars[2];
	char	*attempt;

	chars[1] = '\0';
	if (next_nbr[0] != '0')
	{
		if ((attempt = read_number(dictionary, next_nbr)))
		{
			*print = 1;
			ft_putstr(attempt, 1);
		}
		else
		{
			chars[0] = next_nbr[0];
			ft_putstr(read_number(dictionary, chars), 1);
			ft_putstr(" ", 1);
			ft_putstr(read_number(dictionary, "100"), 1);
			if (next_nbr[1] != '0' || next_nbr[2] != '0')
				ft_putstr(" and ", 1);
		}
	}
}

void	print_second(t_dict *dictionary, char next_nbr[3], int *print)
{
	char	chars[3];
	char	*attempt;

	chars[0] = next_nbr[1];
	chars[1] = next_nbr[2];
	chars[2] = '\0';
	if (next_nbr[1] != '0' && !(*print))
	{
		if ((attempt = read_number(dictionary, chars)))
		{
			*print += 1;
			ft_putstr(attempt, 1);
		}
		else
		{
			chars[1] = '0';
			ft_putstr(read_number(dictionary, chars), 1);
			if (next_nbr[2] != '0' && next_nbr[1] != '1')
				ft_putstr("-", 1);
		}
	}
}

void	print_third(t_dict *dictionary, char next_nbr[3], int *print)
{
	char	chars[2];

	chars[1] = '\0';
	if (next_nbr[2] != '0' && next_nbr[1] != '1' && !(*print))
	{
		chars[0] = next_nbr[2];
		ft_putstr(read_number(dictionary, chars), 1);
	}
}

void	print_append(t_dict *dictionary, int n, int only_z)
{
	char	*append;
	int		i;

	if (n != 0)
		ft_putstr(" ", 1);
	if (n > 0)
	{
		i = 0;
		append = malloc(sizeof(char) * (3 * n) + 2);
		append[0] = '1';
		append[1] = '\0';
		while (i < (3 * n))
		{
			ft_strcat(append, "0");
			i++;
		}
		ft_putstr(read_number(dictionary, append), 1);
		free(append);
		if (n > 0 && !only_z)
			ft_putstr(", ", 1);
	}
}
