/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 09:29:24 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 23:09:45 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_header.h"

char	*populate_first(char *next, char *nbr, int *n)
{
	int		len;

	len = ft_strlen(nbr);
	*n = len / 3;
	if (len % 3 == 1)
	{
		next[0] = '0';
		next[1] = '0';
		next[2] = *nbr++;
	}
	if (len % 3 == 2)
	{
		next[0] = '0';
		next[1] = *nbr++;
		next[2] = *nbr++;
	}
	if (len % 3 == 0)
	{
		*n -= 1;
		next[0] = *nbr++;
		next[1] = *nbr++;
		next[2] = *nbr++;
	}
	return (nbr);
}

int		check_too_big(char *nbr)
{
	while (*nbr == '0')
		nbr++;
	if (ft_strlen(nbr) <= 39)
		return (FALSE);
	ft_putstr("Dict Error\n", 2);
	return (TRUE);
}

void	start_print(t_dict *dictionary, char *nbr)
{
	int		n;
	int		print;
	char	next_nbr[3];

	if (check_too_big(nbr) || is_direct_entry(dictionary, nbr))
		return ;
	nbr = populate_first(&next_nbr[0], nbr, &n);
	while (TRUE)
	{
		print = 0;
		if (next_nbr[0] != '0' || next_nbr[1] != '0' || next_nbr[2] != '0')
		{
			print_first(dictionary, next_nbr, &print);
			print_second(dictionary, next_nbr, &print);
			print_third(dictionary, next_nbr, &print);
			print_append(dictionary, n, only_zero_after(nbr));
		}
		n--;
		if (n < 0)
			break ;
		next_nbr[0] = *nbr++;
		next_nbr[1] = *nbr++;
		next_nbr[2] = *nbr++;
	}
	ft_putstr("\n", 1);
}
