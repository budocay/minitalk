##
## Makefile for makefile in /home/lina_a/rendu/B2/CPE/Allum1
## 
## Made by lina_a
## Login   <lina_a@epitech.net>
## 
## Started on  Mon Feb  9 11:19:37 2015 lina_a
## Last update Fri Feb 20 08:43:13 2015 lina_a
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wall -Wextra
CFLAGS	+= -I include

NAME_CLIENT	= ./client/client
NAME_SERVER	= ./server/server

SRCS_CLIENT	= ./src_client/client.c \
	  	  ./src_client/my_printf.c \
	  	  ./src_client/my_putchar.c \
	  	  ./src_client/my_put_nbr.c \
		  ./src_client/my_getnbr.c \
	  	  ./src_client/my_putstr2.c \
	  	  ./src_client/my_putstr.c \
	          ./src_client/my_strlen.c

SRCS_SERVER	= ./src_serve/server.c \
		  ./src_serve/my_getnbr.c \
		  ./src_serve/my_printf.c \
		  ./src_serve/my_putchar.c \
		  ./src_serve/my_put_nbr.c \
		  ./src_serve/my_putstr2.c \
		  ./src_serve/my_putstr.c \
		  ./src_serve/my_strlen.c

OBJS_CLIENT	= $(SRCS_CLIENT:.c=.o)

OBJS_SERVER	= $(SRCS_SERVER:.c=.o)


all:	$(NAME_CLIENT) $(NAME_SERVER)

######################################################################
#								     #
#			Création du client			     #
#								     #
#								     #
######################################################################
$(NAME_CLIENT):		$(OBJS_CLIENT)
		mkdir -p client
		$(CC) -o $(NAME_CLIENT) $(OBJS_CLIENT)

######################################################################
#								     #
#			Création du serveur			     #
#								     #
#								     #
######################################################################
$(NAME_SERVER):		$(OBJS_SERVER)
		mkdir -p server
		$(CC) -o $(NAME_SERVER) $(OBJS_SERVER)

test:
	./start.sh

clean:
	$(RM) $(OBJS_CLIENT)
	$(RM) $(OBJS_SERVER)

fclean: clean
	$(RM) $(NAME_CLIENT)
	$(RM) $(NAME_SERVER)

re: fclean all

.PHONY:	all clean fclean re test
