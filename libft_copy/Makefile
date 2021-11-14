MAND_SRCS	= ft_isdigit.c \
        ft_memset.c \
        ft_isprint.c \
        ft_strlcat.c \
        ft_atoi.c \
        ft_strlcpy.c \
        ft_tolower.c \
        ft_bzero.c \
        ft_strlen.c \
        ft_toupper.c \
        ft_calloc.c \
        ft_memchr.c \
        ft_isalnum.c \
        ft_memcmp.c \
        ft_strncmp.c \
        ft_isalpha.c \
        ft_memcpy.c \
        ft_strchr.c \
        ft_strnstr.c \
        ft_isascii.c \
        ft_memmove.c \
        ft_strdup.c \
        ft_strrchr.c \
BONUS_SRCS	=ft_lstnew.c\
	ft_lstadd_front.c	\
	ft_lstsize.c		\
	ft_lstlast.c		\
	ft_lstadd_back.c	\
	ft_lstdelone.c		\
	ft_lstclear.c		\
	ft_lstiter.c		\
	ft_lstmap.c
MAND_OBJS	= ${MAND_SRCS:.c=.o}
BONUS_OBJS	= ${BONUS_SRCS:.c=.o}
NAME	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

LIB	= ar rcs

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${MAND_OBJS}
		ar rcs ${NAME} ${MAND_OBJS}

all:		${NAME} ${MAND_OBJS}

bonus	:	$(MAND_OBJS) $(BONUS_OBJS) 
		ar rcs ${NAME} $(BONUS_OBJS) $(MAND_OBJS)

clean:
		${RM} ${MAND_OBJS} ${BONUS_OBJS}

fclean: 	clean
		${RM} ${NAME}
			
re:		fclean all
