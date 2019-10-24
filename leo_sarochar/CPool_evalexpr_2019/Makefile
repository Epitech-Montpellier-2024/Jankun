##
## EPITECH PROJECT, 2019
## EvalExpr
## File description:
## Makefile for EvalExpr
##

SRC	=	main.c	\
		eval_expr.c	\
		do_op.c

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

all:	lib-make compile

compile:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -W -Wall -I./include -L./lib/ -lmy

debug:	$(OBJ)
	$(MAKE) -C lib/my/
	gcc -static -o $(NAME) $(OBJ) -W -Wall -g3 -I./include -L./lib/ -lmy

lib-make:
	$(MAKE) -C lib/my/

tests_run:	$(OBJ)
	gcc -o unit_tests eval_expr.c do_op.c tests/eval_expr_tests.c -W -Wall -I./include -L./lib/ -lmy --coverage -lcriterion
	./unit_tests

clean:
	rm -f $(OBJ)
	rm -f *.gcno
	rm -f *.gcda
	$(MAKE) clean -C lib/my/

fclean:	clean
	rm -f $(NAME)

re:	fclean all