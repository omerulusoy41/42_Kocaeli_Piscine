rm -rf libft.a
find . -name "*.c" -exec gcc -Wall -Werror -Wextra -c {} \;
ar rc libft.a *.o
find . -name "*.o" -delete
