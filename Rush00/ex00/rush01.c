/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmendes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:05:37 by jmendes           #+#    #+#             */
/*   Updated: 2020/11/29 15:48:36 by jmendes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_bordas(int l, int c, int x, int y)
{
	if ((l == 1 && c == 1) || (l == y && c == x && c > 1 && l > 1))
		ft_putchar('/');
	else if ((l == 1 && c == x) || (l == y && c == 1))
		ft_putchar('\\');
	else
		ft_putchar('*');
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
