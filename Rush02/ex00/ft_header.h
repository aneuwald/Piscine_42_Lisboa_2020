/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:24:43 by acanterg          #+#    #+#             */
/*   Updated: 2020/12/14 23:09:32 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define TRUE	1
# define FALSE	0

typedef struct	s_dict
{
	char		*key;
	char		*value;
}				t_dict;

typedef struct	s_input
{
	char		*file;
	char		*nbr;
}				t_input;

void			get_input_values(int ac, char **av, t_input *inputs);
t_dict			*populate_dict(char *file_name);
char			*read_file(char *file_name);
char			*get_key(char *str);
char			*get_value(char *str);
char			*read_number(t_dict *dictionary, char *nbr);
void			start_print(t_dict *dictionary, char *nbr);
void			free_dictionary(t_dict *dict);
void			free_splited(char **splited);
t_dict			*sort_dictionary(t_dict *dict);
int				only_zero_after(char *str);
int				is_direct_entry(t_dict *dictionary, char *nbr);
void			print_first(t_dict *dictionary, char next_nbr[3], int *print);
void			print_second(t_dict *dictionary, char next_nbr[3], int *print);
void			print_third(t_dict *dictionary, char next_nbr[3], int *print);
void			print_append(t_dict *dictionary, int n, int only_z);
int				is_space(char c);
char			*ft_strcat(char *dest, char *src);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
void			ft_putstr(char *str, int fildes);
void			ft_putchar(char c);
char			**ft_split(char *str, char *charset);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(char *str);
void			ft_count_char(char c, char *str);
int				ft_count_words(char **matrix);

#endif
