/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 13:28:28 by egomes            #+#    #+#             */
/*   Updated: 2020/12/16 19:37:01 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define TRUE	1
# define FALSE	0

typedef struct	s_ref
{
	char		**mtrx;
	int			x_bigger;
	int			y_bigger;
	int			bigger;
	int			rows;
	int			cols;
	char		empty;
	char		obstacle;
	char		full;
}				t_ref;

int				ft_atoi(char *str);
void			ft_putstr(char *str, int nb);
char			**ft_split(char *str, char *charset);
int				ft_strlen(char *str);
void			ft_putchar(char c, int nb);
char			*read_file(char *path);
void			get_biggest_sq(t_ref *refs);
int				initiate_data(t_ref *refs, char *filename);
void			ft_putchar(char c, int nb);
int				initiate_data_stdin(t_ref *refs, char *buffer);
void			free_mtrx(char **mtrx);

#endif
