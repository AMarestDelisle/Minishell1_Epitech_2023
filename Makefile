##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compiles mylib
##

CC 		=	gcc

BODY	=	src/body_minishell/

CD	=	src/cd_command/

CHILD	=	src/child/

ENV	=	src/env/

LIB	=	src/lib_for_minishell/

LL	=	src/linked_list/

RM_PART	=	src/remove_part/

SEARCH	=	src/search_if_line_already_exist/

SETENV	=	src/setenv/

UNSETENV	=	src/unsetenv/

SRC 	=	src/main.c						\
		$(BODY)create_minishell.c			\
		$(BODY)execute_command.c			\
		\
		$(CD)exec_cd_command.c				\
		$(CD)save_pwd.c						\
		$(CD)search_cd_command.c			\
		$(CD)search_just_cd.c				\
		$(CD)search_pwd.c					\
		\
		$(CHILD)create_child.c				\
		\
		$(ENV)create_env.c					\
		$(ENV)print_env.c					\
		$(ENV)search_element_in_env.c		\
		$(ENV)search_env.c					\
		$(ENV)search_one_part.c				\
		\
		$(LIB)my_putchar.c					\
		$(LIB)my_putstr.c					\
		$(LIB)my_str_to_word_array.c		\
		$(LIB)my_strcat.c					\
		$(LIB)my_strcmp.c					\
		$(LIB)my_strdup.c					\
		$(LIB)my_strlen.c					\
		\
		$(LL)create_element_in_list.c		\
		$(LL)create_env_in_ll.c				\
		$(LL)remove_line.c					\
		$(LL)search_element_in_ll.c			\
		\
		$(RM_PART)remove_end.c				\
		$(RM_PART)remove_start.c			\
		\
		$(SEARCH)search_if_line_exist.c		\
		\
		$(SETENV)exec_setenv.c				\
		$(SETENV)search_setenv_command.c	\
		\
		$(UNSETENV)exec_unsetenv.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

INCLUDES	=	-I includes/

CFLAGS	=	$(INCLUDES) -Wall -Wextra -g

all: 	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	find . \( -name "*~" -o -name "#*" -o -name "*#" \) -delete

fclean: clean
	rm -f $(NAME)

re: 	fclean all
