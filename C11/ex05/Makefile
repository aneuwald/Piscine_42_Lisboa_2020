# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/09 18:16:55 by acanterg          #+#    #+#              #
#    Updated: 2020/12/13 15:25:17 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= doop.c srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_calc.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

HEADERS	= headers

CFLAGS	= -Wall -Wextra -Werror

NAME	= do-op

.c.o:		
			${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

all : 		${NAME}

${NAME} :	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean :		
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY:		all fclean clean re