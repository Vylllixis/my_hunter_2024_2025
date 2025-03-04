##
## EPITECH PROJECT, 2024
## count_island
## File description:
## Makefile
##

NAME	=	my_hunter

SRCS	=	$(shell ls *.c)
# SRCS	=	./checkpoint.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-W -Wall -Wextra -g3

LDFLAGS	=	-lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system

all:	$(NAME)

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(RM) -f $(OBJS)

fclean:	clean
	$(RM) -f $(NAME)

clean_o: clean
	$(RM) -f $(OBJS)

re: fclean all clean_o
