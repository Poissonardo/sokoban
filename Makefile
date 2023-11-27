##
## EPITECH PROJECT, 2023
## my_printf
## File description:
## makefile
##

NAME		=	my_sokoban

LIB_NAME	=	./my_printf/libmy.a

LIB			=	my_printf

SRCS	:=	$(shell find $(SRC_DIRS) -name "*.c" \
			-not -name "main.c"	\
			-not -path "./libmy/*")

OBJS	=	$(SRCS:.c=.o)

CFLAGS	= -Wall -Wextra -g3

##TEST_NAME	=	unit_tests

##SRC_TEST	=	tests/test_my_printf.c

##TESTFLAGS	=	-lcriterion --coverage -g3

$(NAME):	$(OBJS)
	make -C lib/my/
	gcc -o $(NAME) main.c $(OBJS) ./lib/my/libmy.a -g3 -lncurses

all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all

dev_test: $(OBJS)
	make -C lib/my/
	gcc -o $(NAME) main.c $(OBJS) ./lib/my/libmy.a -g3 -lncurses
	make clean
