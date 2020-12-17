# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/09 18:16:55 by acanterg          #+#    #+#              #
#    Updated: 2020/12/17 15:51:18 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_tail.c ft_strcmp.c ft_atoi.c ft_aux.c ft_validation.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= ft_tail

all : 		${NAME}

${NAME} :	${OBJS} 
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean :		
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY:		all fclean clean re