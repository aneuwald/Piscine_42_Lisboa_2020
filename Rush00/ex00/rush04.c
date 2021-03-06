/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:49:20 by jmendes           #+#    #+#             */
/*   Updated: 2020/11/29 15:49:51 by jmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_bordas(int l, int c, int x, int y)
{
	if ((l == 1 && c == 1) || (l == y && c == x && c > 1 && l > 1))
		ft_putchar('A');
	else if ((l == 1 && c == x) || (l == y && c == 1))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int l;
	int c;

	l = 1;
	c = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l != 1 && l != y) && (c != 1 && c != x))
				ft_putchar(' ');
			else
				print_bordas(l, c, x, y);
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
