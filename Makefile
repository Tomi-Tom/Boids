##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

CC				=			g++

## ===========================================================
## ===========================[VAR]===========================
## ===========================================================

NAME			=			Boids

NAME_TEST		=			unit_test

## ==========================[PATHS]==========================

SRC_PATH		=			src/

MAIN_PATH		=			$(SRC_PATH)main/

UTILS_PATH		=			$(SRC_PATH)utils/

TEST_PATH		=			tests/

## ===========================[SRC]===========================

SRC_MAIN		=			$(MAIN_PATH)main.cpp					\

SRC_UTILS		=			$(UTILS_PATH)error_handling.cpp			\
							$(UTILS_PATH)help.cpp					\

SRC_GLOBAL		=			$(SRC_UTILS)							\

SRC				=			$(SRC_GLOBAL)							\
							$(SRC_MAIN)								\

TEST_SRC		=			$(TEST_PATH)tests_error_handling.c		\

OBJ				=			$(SRC:.c=.o)

## =========================[OPTIONS]=========================

CFLAGS			=			-Wall -Wextra

CPPFLAGS		=			-I include

## ===========================================================
## ==========================[RULES]==========================
## ===========================================================

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(CFLAGS) $(CPPFLAGS) $(OBJ)

re:			fclean	all

clean:
		$(RM $(OBJ)

fclean:		clean
		$(RM) $(NAME) $(NAME_TEST) *gcda *gcno

debug: CFLAGS += -g
debug: re

tests_run:

## ===========================[END]===========================

.PHONY:	all	re	clean	fclean	tests_run	debug
