/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 01:20:59 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/15 02:03:05 by acanterg         ###   ########.fr       */
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

void	ft_putstr(char *str, int fildes);

#endif
