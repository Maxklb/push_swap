# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 15:45:07 by makoch-l          #+#    #+#              #
#    Updated: 2024/05/17 15:08:53 by makoch-l         ###   ########.fr        #
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
			push_swap.c \
			push.c \
			swap.c \
			rotate.c \
			reverse_rotate.c \
			utils.c \
			stack_utils.c \
			
### RULES ###

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_PATH):
		mkdir -p $(OBJ_PATH)

$(NAME): $(OBJECTS)
		make -C libft
		$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.c
		$(CC) -c $(CFLAGS) $?

libft:
		make -C libft

clean:
		$(RM) $(OBJ_PATH)
		make -C libft clean

fclean: clean
		$(RM) $(NAME) libft/libft.a

re: fclean all

.PHONY: all libft clean fclean re