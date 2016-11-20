##
## Makefile for makefile in /home/julian-ladjani/delivery/PSU/my_printf
##
## Made by julian ladjani
## Login   <julian.ladjani@epitech.net>
##
## Started on  Mon Nov  7 16:31:28 2016 julian ladjani
## Last update Jun Nov 18 18:47:09 2016 Julian Ladjani
##

CC 		=	gcc

SRC		=	src/my_printf.c					\
			src/my_flag.c					\
			src/fonction/printf/my_printf_fonc_base.c	\
			src/fonction/printf/my_printf_fonc.c		\
			src/fonction/printf/my_printf_fonc2.c		\
			src/bonus/my_printf_fonc_b.c			\
			src/fonction/usefull/usefull_foncs.c		\
			src/fonction/usefull/usefull_foncs2.c		\
			src/fonction/usefull/usefull_fonc3.c		\
			src/fonction/modifiers/mod_final.c		\
			src/fonction/modifiers/mod_fonc1.c		\
			src/fonction/modifiers/mod_fonc2.c		\
			src/fonction/modifiers/mod_struct.c		\
			src/putnbr/my_putnbr_signed.c			\
			src/putnbr/my_putnbr_unsigned.c			\

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

CFLAGS		=	-I./include/  -Werror

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
