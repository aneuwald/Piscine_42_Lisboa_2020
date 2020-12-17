/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 01:20:59 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/16 21:32:29 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <libgen.h>
# include <stdio.h>
# include <sys/errno.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putstr(char *str, int fildes);
void	print_error_not_found(char *filename, char *arg);
int		check_arguments(int ac, char **av);

#endif
