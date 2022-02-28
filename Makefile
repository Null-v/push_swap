# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 13:49:29 by edi-marc          #+#    #+#              #
#    Updated: 2022/02/28 14:44:18 by edi-marc         ###   ########.fr        #
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
	$(MAKE) bonus -C $(LIBFT_DIR)

$(NAME) : $(LIBFT)
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -L$(LIBFT_DIR) -lft $(SRCS) -o $(NAME) 

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

bonus:

re: fclean all

bre: fclean bonus

.PHONY: all clean fclean bonus re bre
