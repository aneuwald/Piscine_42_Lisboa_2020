/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:24:43 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/13 09:14:13 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

# define OPERATORS "+-*/%"

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_sum(int a, int b);
int		ft_subtract(int a, int b);
int		ft_multiply(int a, int b);
int		ft_divide(int a, int b);
int		ft_rest(int a, int b);

#endif
