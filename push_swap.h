/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:49:27 by edi-marc          #+#    #+#             */
/*   Updated: 2022/02/28 15:37:11 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int		n;
	int		*arr;
	int		*i;
}				t_stack;

int		check_stack_valid(t_stack *a);
int		check_stack_ordered(t_stack *a);
void	free_stacks(t_stack *a, t_stack *b);
void	ft_putendl(char *s);
void	ft_sort_index_stack(t_stack *stack);
int		ft_split_atoi(char *s, t_stack *a);
void	order_stack(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	sort_bits(t_stack *a, t_stack *b, int bit);
void	ra(t_stack *a);
void	rb(t_stack *b);
int		read_stack(char **av, t_stack *a);
void	rra(t_stack *a);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	set_index(t_stack *a);
void	sort_three(t_stack *a);
void	sort_five(t_stack *a, t_stack *b);
void	ft_swap(int *new, int *old);
int		ft_d_count(char *s);
void	ft_putstr(char *s);
void	ft_putchar(char c);

#endif
