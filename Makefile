##
## Makefile for  in /home/sepret_f/sem2/cpe/CPE_2015_Allum1
## 
## Made by fabrice sepret
## Login   <sepret_f@epitech.net>
## 
## Started on  Wed Feb 10 15:28:00 2016 fabrice sepret
## Last update Sun May 22 16:37:02 2016 fabrice sepret
##

SRC =	error.c \
	my_atoi.c \
	alum1.c \
	change_lines_ai.c \
	change_lines.c \
	check_win.c \
	display.c \
	get_next_line.c \
	my_ai.c \
	my_put.c \
	my_game.c \
	strat_ai.c \
	print_error.c \
	check.c \

NAME =	allum1

OBJ =	$(SRC:.c=.o)

RM =	rm -rf

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
