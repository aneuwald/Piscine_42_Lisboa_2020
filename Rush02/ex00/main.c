/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:41:22 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 23:04:43 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	t_dict	*dictionary;
	t_input	inputs;

	get_input_values(argc, argv, &inputs);
	if (!inputs.nbr || !inputs.file)
	{
		ft_putstr("Error\n", 2);
		return (0);
	}
	if (!(dictionary = populate_dict(inputs.file)))
	{
		ft_putstr("Dict Error\n", 2);
		return (0);
	}
	start_print(dictionary, inputs.nbr);
	if (argc == 1)
		free(inputs.nbr);
	free_dictionary(dictionary);
}
