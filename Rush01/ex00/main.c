/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:13:18 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/06 17:11:40 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int		g_grid[N][N];
int		g_params[N][N];

int		put_next(int index, int value);
void	print_matrix();
void	print_error();
int		get_parameters(char *params);

int		main(int argc, char **argv)
{
	if (argc != 2 || get_parameters(argv[1]) == 0)
	{
		print_error();
		return (0);
	}
	if (put_next(-1, 0) == 1)
		print_matrix();
	else
		print_error();
	return (0);
}
