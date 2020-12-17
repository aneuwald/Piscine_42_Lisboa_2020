/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:45:19 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/15 15:14:44 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int nb)
{
	write(nb, &c, 1);
}

void	ft_putstr(char *str, int nb)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i], nb);
}
