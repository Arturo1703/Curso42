# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 18:14:14 by arlopez-          #+#    #+#              #
#    Updated: 2021/11/28 19:39:01 by arlopez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c \
        tohex.c \
		printunsignednum.c \
		printhexpointer.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a
HEADER	= ft_printf.h
library = libft/libft.a
CC		= gcc
RM		= rm -f

CFLAGS  = -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		cp ${library} ${NAME}
		ar rcs ${NAME} ${OBJS}

all:		${NAME} ${OBJS} ${HEADER}

clean:
		${RM} ${OBJS}

fclean: 	clean
		${RM} ${NAME}
			
re:		fclean all

.PHONY : all clean fclean re bonus