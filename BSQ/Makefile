# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/09 18:16:55 by acanterg          #+#    #+#              #
#    Updated: 2020/12/16 19:34:10 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= bsq.c srcs/ft_atoi.c srcs/ft_read_file.c srcs/ft_putstr.c srcs/ft_split.c srcs/ft_strlen.c srcs/ft_get_sq_size.c srcs/ft_validation.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= bsq

all : 		${NAME}

${NAME} :	${OBJS} 
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean :		
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY:		all fclean clean re