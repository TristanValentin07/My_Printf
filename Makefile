##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

CC = gcc -o

SRC =	./my_printf.c				\
		./flags_str.c				\
		./flags_char.c				\
		./flags_int1.c				\
		./flags_int2.c				\
		./flags_int3.c				\
		./flags_float1.c			\
		./flags_float2.c			\
		./flags_float3.c			\
		./flags_pntr.c				\
		./my_put_nbr.c				\
		./my_putchar.c				\
		./my_putstr.c				\
		./my_strlen.c				\
		./call_flags2.c				\
		./my_compute_power_rec.c	\

SRC_TESTS	=	./tests/testunit.c	\

MAIN		=	main.c	\

TEST_NAME	=	unit_tests	\

TESTS_FLAGS	=	-lcriterion	--coverage

OBJ	=	$(SRC:.c=.o)

MOBJ	=	$(MAIN:*.c=.o)

NAME 	=	my_printf	\

CFLAGS 	=	-Wall -Wextra -I ./includes

all:	$(OBJ)
	ar rc libmy.a $(OBJ)

main: 	Makelib $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(NAME) $(MOBJ) $(OBJ) $(CFLAGS)

Makelib:
	@echo -e "\n\e[92mSuccessfully compiled\e[0m"

tests_run:
	$(CC) $(TEST_NAME) $(SRC) $(SRC_TESTS) $(TESTS_FLAGS)
	./$(TEST_NAME)
	gcovr --exclude tests/
	rm -f *.gc*
	rm -f $(TEST_NAME)

clean:
	make fclean
	@echo -e "\n\e[92mSuccessfully clean\e[0m"

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)
	rm -f $(TEST_NAME)
	rm -f libmy.a
	rm -f *.gcno
	rm -f *.gcda
	clear

re: clean fclean all

.PHONY: all main clean fclean re debug
