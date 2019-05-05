##
## EPITECH PROJECT, 2017
## makefile
## File description:
## mathieu gery
##

SRC	=	my_putstr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_strlen.c	\
		rights.c	\
		size.c		\
		date.c		\
		name.c		\
		my_strcat.c

CFLAGS	+=	-I../../include/

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
