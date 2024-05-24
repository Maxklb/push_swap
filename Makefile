# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 15:45:07 by makoch-l          #+#    #+#              #
#    Updated: 2024/05/24 16:35:23 by makoch-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### EXECUTABLE ###

NAME = push_swap

### COMPILATION ###

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

### INCLUDES ###

SRC_PATH = src/
OBJ_PATH = obj/
OBJ = $(SOURCES:.c=.o)
OBJECTS = $(addprefix $(OBJ_PATH), $(OBJ))

### SOURCE FILES ###

SOURCES = 	check_input_utils.c \
			check_input.c \
			push.c \
			swap.c \
			rotate.c \
			reverse_rotate.c \
			utils.c \
			stack_utils.c \
			sorting.c \
			small_sorting.c \

### COLORS ###
NOC		= \033[0m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
WHITE	= \033[1;37m

### RULES ###

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH):
		@echo "$(GREEN)Creating $(OBJ_PATH)$(NOC)"
		@mkdir -p $(OBJ_PATH)
		@echo "$(GREEN)clang $(WHITE)$(CFLAGS)$(NOC)$(GREEN) flags used$(NOC)"

$(NAME): $(OBJECTS)
		@echo "$(GREEN)Compiling $(NAME)$(NOC)"
		@make --no-print-directory -C libft
		@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
		@echo "$(GREEN)$(NAME) compiled$(NOC)"
		@echo "$(GREEN)$(NAME) ready to use$(NOC)"

%.o: %.c
		@$(CC) -c $(CFLAGS) $?

libft:
		@make --no-print-directory -C libft

clean:
		@echo "$(RED)Deleting objects files$(NOC)"
		@$(RM) $(OBJ_PATH)
		@make --no-print-directory -C libft clean

fclean: clean
		@echo "$(RED)Deleting $(NAME)$(NOC)"
		@$(RM) $(NAME) libft/libft.a

re: fclean all

.PHONY: all libft clean fclean re