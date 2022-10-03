SRCS	= ${wildcard srcs/*.c}
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= libft.a
LIBC	= ar rc #r yenıden olusturma , c mesajı gizler 
LIBR	= ranlib # bir arşivin içeriğine bir dizin oluşturur ve onu arşivde saklar.
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean all
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o 
