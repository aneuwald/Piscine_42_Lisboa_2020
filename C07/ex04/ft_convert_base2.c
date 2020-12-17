/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:34:16 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/09 09:19:22 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i] != '\0')
		if (c == base[i])
			return (i);
	return (-1);
}

int		get_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		calc_size(unsigned int holder, int base_len)
{
	int i;

	i = 0;
	if (holder == 0)
		return (1);
	while (holder > 0)
	{
		holder /= base_len;
		i++;
	}
	return (i);
}

int		calc_holder(char *nbr, char *base_from)
{
	int base_len_from;
	int	holder;

	base_len_from = get_base_len(base_from);
	holder = 0;
	while (*nbr && is_in_base(*nbr, base_from) != -1)
		holder = holder * base_len_from + is_in_base(*nbr++, base_from);
	return (holder);
}

void	putnbr_base(char *final_string, int *pos, int holder, char *base_to)
{
	int	base_len_to;

	base_len_to = get_base_len(base_to);
	if (holder < 0)
	{
		final_string[*pos] = '-';
		holder *= -1;
		*pos += 1;
	}
	if (holder >= base_len_to)
	{
		putnbr_base(final_string, pos, holder / base_len_to, base_to);
		putnbr_base(final_string, pos, holder % base_len_to, base_to);
	}
	else
	{
		final_string[*pos] = base_to[holder];
		*pos += 1;
	}
}
