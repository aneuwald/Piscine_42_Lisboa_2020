# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/09 18:16:55 by acanterg          #+#    #+#              #
#    Updated: 2020/12/14 23:23:59 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ax/ft_aux_1.c ax/ft_aux_2.c ax/ft_aux_3.c srcs/free_memory.c srcs/get_input_values.c srcs/get_values.c srcs/populate_dict.c srcs/prints.c srcs/read_file_number.c srcs/sort_dictionary.c srcs/start_print.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= rush-02

all : 		${NAME}

${NAME} :	${OBJS} 
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean :		
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY:		all fclean clean re
