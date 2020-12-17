/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:08:42 by jmendes           #+#    #+#             */
/*   Updated: 2020/11/28 18:39:43 by jmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int e;

	e = 0;
	i = 0;
	while (e++ < y)
	{
		i = 0;
		while (i++ < x)
		{
			if ((e == y && i == x) || (e == 1 && i == 1) ||
				(e == y && i == 1) || (i == x && e == 1))
				ft_putchar('o');
			else if (i == x || i == 1)
				ft_putchar('|');
			else if (e == 1 || e == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
