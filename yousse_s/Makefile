##
## Makefile for  in /home/kirito/etna/chifumi
##
## Made by YOUSSEF seif-eddine
## Login   <yousse_s@etna-alternance.net>
##
## Started on  Thu Oct 27 16:54:39 2016 YOUSSEF seif-eddine
## Last update Fri Nov 11 18:05:20 2016 YOUSSEF seif-eddine
##

RM      =       rm -f

CC      =       gcc -g3

NAME    =       my_ftl

SRC     =       source/air_shed.c		\
		source/my_string2.c		\
		source/my_putmsg.c		\
		source/container.c		\
		source/system_control.c		\
		source/system_repair.c		\
		source/readline.c		\
		source/game.c			\
		source/my_put_nbr.c		\
		source/my_command.c		\
		source/attack.c			\
		source/sector.c			\
		source/detect.c			\
		source/system_critical.c	\
		source/ja.c			\
		source/r_detect.c		\
		source/my_ftl.c			\
		source/my_freza.c		\
		source/freezer.c		\
		source/sdl.c			\
		source/evade.c			\
		source/picolo.c			\

OBJ     =       $(SRC:.c=.o)

CFLAGS  =       -W -Wall -Wextra -Werror -pedantic -ansi -W

RM      =       rm -fr

all     :       $(NAME)

$(NAME) :       $(OBJ)
		$(CC) -o $(NAME) $(OBJ) -lSDL -lSDL_ttf
clean   :
		$(RM) $(OBJ) *~

fclean  :       clean
		$(RM) $(NAME)

re      :	fclean all

.PHONY  : all clean fclean re
