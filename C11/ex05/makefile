SRCS	= ${wildcard srcs/*.c}
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean all
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o 
