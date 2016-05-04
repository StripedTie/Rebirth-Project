##
## Makefile for Makefile in /home/cosson_v/rb-cosson_v
## 
## Made by Vincent Cosson
## Login   <cosson_v@epitech.net>
## 
## Started on  Tue Apr 19 15:26:13 2016 Vincent Cosson
## Last update Tue Apr 19 16:42:07 2016 Vincent Cosson
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall - Werror
#CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I./include

LDFLAGS	=

LIB	= -L./ -lrb

NAME	= yo

SRCS	= functions/rb_strupcase.c

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LIB) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re