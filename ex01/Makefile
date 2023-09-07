all: srcs/*.c includes/*.h
	gcc -Wall -Wextra -Werror -c srcs/*.c
	ar -rc libft.a *.o
	ranlib libft.a
clean:
	rm *.o
fclean:
	make clean
re:
	make fclean
	make all
