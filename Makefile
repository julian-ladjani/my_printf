##
## Makefile for makefile in /home/julian-ladjani/delivery/PSU/my_printf
##
## Made by julian ladjani
## Login   <julian.ladjani@epitech.net>
##
## Started on  Mon Nov  7 16:31:28 2016 julian ladjani
## Last update Feb Nov 14 18:36:00 2016 Julian Ladjani
##

CC 		=	gcc

SRC		=	src/my_printf.c				\
			src/my_flag.c				\
			src/fonction/my_printf_fonc_base.c	\
			src/fonction/my_printf_fonc.c		\
			src/fonction/my_printf_fonc2.c		\
			src/bonus/my_printf_fonc_b.c		\
			src/fonction/usefull_foncs.c		\
			src/fonction/usefull_foncs2.c		\
			src/fonction/usefull_foncs2.c		\
			src/fonction/my_printf_mod.c		\
			src/putnbr/my_putnbr_signed.c		\
			src/putnbr/my_putnbr_unsigned.c		\

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

CFLAGS		=	-I./include/

NAME 		=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
		ar -rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) *~

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
