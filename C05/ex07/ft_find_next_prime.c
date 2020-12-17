/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:36:17 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/03 15:30:44 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int	check_is_prime(long int nb, long int i)
{
	if (nb % i == 0 || nb % 2 == 0)
		return (0);
	if (i * i > nb)
		return (1);
	return (check_is_prime(nb, i + 2));
}

long int	is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (check_is_prime(nb, 3));
}

int			ft_find_next_prime(int nb)
{
	unsigned long int next;

	next = nb;
	while (!is_prime(next))
		next++;
	return (next);
}
