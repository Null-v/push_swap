# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 13:49:29 by edi-marc          #+#    #+#              #
#    Updated: 2021/08/04 19:26:00 by edi-marc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = operations.c utils.c init_cmd.c check.c max_subseq.c \
	ft_push_swap.c enumerate_stack.c algo_part_two.c stack_align.c \
	utils2.c operations1.c operations2.c utils3.c algo_part_two_2.c \
	is_sort.c check_dup.c five_numbers.c three_numbers.c \

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = Libft

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
