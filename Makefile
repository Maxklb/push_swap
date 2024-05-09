# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 15:45:07 by makoch-l          #+#    #+#              #
#    Updated: 2024/05/09 19:09:57 by makoch-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILATION ###

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

### SOURCE FILES ###

SOURCES = 	src/check_input_utils.c \
			src/check_input.c \
			src/push_swap.c \
			src/push.c \
			src/swap.c \
			
### OBJECT FILES ###

OBJECTS = $(SOURCES:.c=.o)

### RULES ###

all:

%.o: %.c
		$(CC) -c $(CFLAGS) $?

libft:
		make -C libft

clean:
		$(RM) $(OBJECTS)
		make -C libft clean

fclean: clean
		$(RM) libft/libft.a

re: fclean all

.PHONY: all libft clean fclean re