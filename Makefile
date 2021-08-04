# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 13:49:29 by edi-marc          #+#    #+#              #
#    Updated: 2021/08/04 17:45:42 by edi-marc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c

LIBFT_DIR = Libft 

CFLAGS = -Wall -Wextra -Werror

CC = gcc

RM = /bin/rm -f

all: $(NAME)

$(LIBFT) :
	$(MAKE) -C $(LIBFT_DIR)

$(NAME) : $(LIBFT)
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -L$(LIBFT_DIR) -lft $(SRCS) -o $(NAME) 

clean:

fclean:

bonus:

re:

bre:

.PHONY: all clean fclean bonus re bre
