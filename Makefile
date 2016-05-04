CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall - Werror
#CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I./include

LDFLAGS	=

#LIB	= -L./ -lrb

NAME	= 

SRCS	=

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
