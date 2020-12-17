# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/09 18:16:55 by acanterg          #+#    #+#              #
#    Updated: 2020/12/17 15:51:31 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_cat.c 

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= ft_cat

all : 		${NAME}

${NAME} :	${OBJS} 
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean :		
			rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY:		all fclean clean re