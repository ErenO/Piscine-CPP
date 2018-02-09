# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 16:11:28 by eozdek            #+#    #+#              #
#    Updated: 2017/10/03 20:12:09 by eozdek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
FILES	= megaphone.cpp
SRCS	= $(addprefix ./, $(FILES))
OBJS	= $(SRCS:./%.c=.obj/%.o)
FLAGS	= -Wall -Wextra -Werror
CC		= clang++

all: $(NAME)

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME)
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
