# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Arturo <Arturo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 18:14:14 by arlopez-          #+#    #+#              #
#    Updated: 2022/02/01 12:50:02 by Arturo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c \
		countvariable.c \
        tohex.c \
		printunsignednum.c \
		ft_putnbr_fd.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strlen.c \
		ft_itoa.c \
		ft_calloc.c \
		ft_bzero.c \
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
		ar rcs ${NAME} ${OBJS}

all:		${NAME} ${OBJS} ${HEADER}

clean:
		${RM} ${OBJS}

fclean: 	clean
		${RM} ${NAME}
			
re:		fclean all

.PHONY : all clean fclean re bonus