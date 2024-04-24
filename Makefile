# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 15:55:27 by lmeubrin          #+#    #+#              #
#    Updated: 2024/04/24 16:55:37 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra
NAME = libft.a
LIB = ar -rcf ??

SRC_DIR = ./

SRCS = $(shell find $(SRC_DIR) -name '*.c')

OBJS = $(SRCS: %= $(BUILD_DIR)/%.o)

$(NAME):
	$(OBJS)
	$(CC) -c $(CFLAGS) -o $@ 

all:
	$(NAME)

clean:
	rm -f *.o

fclean:
	clean
	rm -f $(NAME)

re:
	fclean
	all

.PHONY: all, clean, fclean, re
