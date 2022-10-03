CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

program : ft_main.o
	${CC} ${CFLAGS} -c ft_main.c
	${CC} ft_main.o

all : program

clean:
	${RM} ft_main.o

fclean: clean all
	${RM} ./a.out

re: fclean all

.PHONY: all clean fclean re
