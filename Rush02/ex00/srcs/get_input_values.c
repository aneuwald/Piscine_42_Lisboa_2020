/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 15:29:36 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 23:10:40 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_header.h"

void	check_valid_nbr(t_input *inputs)
{
	char	*temp_nbr;
	long	sum_zero;

	sum_zero = 0;
	temp_nbr = inputs->nbr;
	while (*temp_nbr)
	{
		sum_zero += *temp_nbr - '0';
		if (*temp_nbr < '0' || *temp_nbr > '9')
		{
			inputs->nbr = 0;
			return ;
		}
		temp_nbr++;
	}
	if (sum_zero == 0)
		inputs->nbr = "0";
}

char	*get_stdin(void)
{
	char	*buffer;
	int		size;

	buffer = malloc(sizeof(char) * 40);
	size = read(0, buffer, 40);
	close(0);
	buffer[size - 1] = 0;
	return (buffer);
}

void	get_input_values(int ac, char **av, t_input *inputs)
{
	if (ac != 1 && ac != 2 && ac != 3)
	{
		inputs->nbr = 0;
		inputs->file = 0;
		return ;
	}
	if (ac == 1)
	{
		inputs->file = "numbers.dict";
		inputs->nbr = get_stdin();
	}
	if (ac == 2)
	{
		inputs->file = "numbers.dict";
		inputs->nbr = av[1];
	}
	else if (ac == 3)
	{
		inputs->file = av[1];
		inputs->nbr = av[2];
	}
	check_valid_nbr(inputs);
	return ;
}
