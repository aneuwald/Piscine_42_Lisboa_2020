/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 07:37:09 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/06 12:09:30 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

extern	int	g_params[N][N];

int		check_input_len(char *params)
{
	int i;

	i = 0;
	while (params[i] != '\0')
		i++;
	return (i);
}

int		get_parameters(char *params)
{
	int i;
	int length_params;
	int	counter;

	length_params = check_input_len(params);
	i = 0;
	counter = 0;
	if (length_params != 31)
		return (0);
	while (i < length_params)
	{
		if (!((params[i] > '0' && params[i] <= '4') &&
			(params[i + 1] == ' ' || params[i + 1] == '\0')))
			return (0);
		else
		{
			g_params[counter / N][counter % N] = params[i] - '0';
			counter++;
		}
		i += 2;
	}
	return (1);
}
