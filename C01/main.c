/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:07:27 by acanterg          #+#    #+#             */
/*   Updated: 2020/11/27 16:02:23 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

int	main()
{
	int 	size = 10;
	int 	i;
	int 	matrix[10];

	matrix[0] = 8;
	matrix[1] = 5;
	matrix[2] = 3;
	matrix[3] = 1;
	matrix[4] = 0;
	matrix[5] = 9;
	matrix[6] = 5;
	matrix[7] = 7;
	matrix[8] = 6;
	matrix[9] = 2;

	i = -1;
	while (++i < size)
      	printf("%i ", matrix[i]);
      	printf("\n\n");

	ft_rev_int_tab(&matrix[0], size);

	i = -1;
	while (++i < size)
      	printf("%i ", matrix[i]);

}
