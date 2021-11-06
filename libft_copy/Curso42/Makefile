SRCS	= $(wildcard *.c)

OBJS	= ${SRCS:.c=.o}

LIBRARY	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

LIB	= ar rcs

${LIBRARY}:	${OBJS}
			ar rcs ${LIBRARY} ${OBJS}

clean:
		${RM} ${OBJS}
lclean:
		${RM} ${LIBRARY}
Aclean: clean lclean

all:	
	$(LIBRARY)
