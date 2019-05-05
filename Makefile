## EPITECH PROJECT, 2017
## makefile my_pushswap
## File description:
## mathieu gery
##

SRC	=	main.c	\
		my_ls.c

NAME	=	my_ls

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc -g -o $(NAME) $(SRC) -Iinclude -Llib/my -lmy

clean:
	make clean -C lib/my

fclean: clean
	rm -f $(NAME)
	make fclean -C lib/my

re:	fclean all
