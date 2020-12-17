/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:24:23 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/09 12:22:45 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 125;
	point->y = -200;
}
int main(void)
{
	t_point point;

	set_point(&point);
	printf("x:%d y:%d\n", point.x, point.y);
	return (0);
}