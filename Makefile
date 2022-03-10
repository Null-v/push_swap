# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 13:49:29 by edi-marc          #+#    #+#              #
#    Updated: 2022/03/08 15:33:15 by edi-marc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

RM = /bin/rm -f

all: $(NAME)

$(LIBFT) :
	@echo "[compiling libft...]"
	@$(MAKE) bonus -C $(LIBFT_DIR)

$(NAME) : $(LIBFT)
	@echo "[push_swap compilation...]"
	@$(CC) $(CFLAGS) -I$(LIBFT_DIR) -L$(LIBFT_DIR) -lft $(SRCS) -o $(NAME) 

clean:
	@echo "[cleaning...]"	
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(RM) $(OBJS)

fclean: clean
	@echo "[hard cleaning...]"
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
