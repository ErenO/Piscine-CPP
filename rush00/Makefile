# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amineau <amineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 16:11:28 by eozdek            #+#    #+#              #
#    Updated: 2017/10/08 11:53:36 by amineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=  ft_retro
FILES	=  AEntity.cpp AShip.cpp Display.cpp Enemy.cpp Map.cpp Missile.cpp \
 			Player.cpp main.cpp
SRCS	= $(addprefix src/, $(FILES))
OBJS	= $(SRCS:src/%.c=.obj/%.o)
INC		= -I include
FLAGS	= -Wall -Wextra -Werror -lncurses
CC		= clang++

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[96m Makefile by e🏀 zdek\033[97m"
	@echo "\033[91mCompiling 😇\033[97m"
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME) $(INC)
		@echo "\033[90mDone 😎\033[97m"
.obj/%.o: src/%.c
	mkdir -p .obj
	@$(CC) -c $< -o $@ $(FLAGS) $(INC)

clean:
	@echo "\033[92mDeleting 💀\033[97m"
	@rm -rf .obj
	@echo "\033[96mClean done 😡\033[97m"

fclean: clean
	@echo "\033[92mDeleting 💀\033[97m"
	@rm -f $(NAME)
	@echo "\033[96mFclean Done 👿\033[97m"

re: fclean all

.PHONY: all clean fclean re
