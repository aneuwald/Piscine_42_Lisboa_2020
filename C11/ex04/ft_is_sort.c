/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:26:20 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/12 15:02:05 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int ctrl_asc;
	int ctrl_desc;

	ctrl_asc = 0;
	ctrl_desc = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			ctrl_asc++;
		if (f(tab[i], tab[i + 1]) < 0)
			ctrl_desc++;
		if (ctrl_asc && ctrl_desc)
			return (0);
		i++;
	}
	return (1);
}
