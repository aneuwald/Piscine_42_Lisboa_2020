/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:41:22 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/13 09:13:51 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		is_valid_input(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 4)
		exit(1);
	if (ft_strlen(av[2]) != 1)
		return (0);
	while (i < 5)
		if (OPERATORS[i++] == av[2][0])
			return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		operator;
	int		(*calc_func[5])(int, int);

	if (!is_valid_input(argc, argv))
		ft_putnbr(0);
	else
	{
		calc_func[0] = &ft_sum;
		calc_func[1] = &ft_subtract;
		calc_func[2] = &ft_multiply;
		calc_func[3] = &ft_divide;
		calc_func[4] = &ft_rest;
		operator = 0;
		while (OPERATORS[operator] != argv[2][0])
			operator++;
		if (operator == 3 && ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero");
		else if (operator == 4 && ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(calc_func[operator](ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	ft_putstr("\n");
	return (1);
}
