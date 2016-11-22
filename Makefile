##
## Makefile for makefile in /home/lnanaay/Downloads
## 
## Made by LEBON Nathan
## Login   <lnanaay@epitech.net>
## 
## Started on  Sat Oct 15 19:14:21 2016 LEBON Nathan
## Last update Tue Nov 22 17:30:44 2016 Nathan Lebon
##



SRCS		= index.c	\
		  papb.c	\
		  rotate_b.c	\
		  double.c	\
		  print_int.c	\
		  rotate.c	\
		  main.c	\
		  my_getnbr.c	\
		  operations.c	\
		  putchar.c	\
		  sort.c

OBJS		= $(SRCS:.c=.o)

NAME		= push_swap

RM		= rm -rf

all:		  $(NAME)

$(NAME):	  $(OBJS)
		  ar rc $(NAME) $(OBJS)
clean:
		  $(RM) $(OBJS)

fclean: 	  clean
		  $(RM) $(NAME)

re : 		  fclean all

.PHONY: all clean fclean re
