/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:17:09 by edi-marc          #+#    #+#             */
/*   Updated: 2021/08/04 17:31:41 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../Libft/libft.h"

# define SA 1
# define SB 4
# define SS 7
# define PA 10
# define PB 13
# define RA 16
# define RB 19
# define RR 22
# define RRA 25
# define RRB 29
# define RRR 33
# define MAX(x, y) ((x > y) ? x : y)
# define MIN(x, y) ((x < y) ? x : y)
# define ABS(x) ((x > 0) ? x : -x)

typedef struct		s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct		s_stacks
{
	t_stack		*a;
	t_stack		*b;
}					t_stacks;

typedef void		(*t_cmd)(t_stacks *stack, int verbose);
int					check_argv(char **av);
int					init_stack(char **av, t_stacks *stack);
int					check_sort(t_stacks *stack);
void				init_cmd(t_cmd *cmd);
void				enumerate_stack(t_stacks *stack, int *stack_a_arr,
						int len_arr);
t_stack				*ft_lstnews(int content);
void				ft_lstadd_backs(t_stack **lst, t_stack *new);
int					ft_lstsizes(t_stack *lst);
t_stack				*ft_lstlasts(t_stack *lst);
void				ft_lstadd_fronts(t_stack **lst, t_stack *new);
void				ft_lstclears(t_stack **lst);
void				ft_wputstr(char *s, int minus);
int					*lst_to_arr(t_stack *a);
int					*max_subseq(int *init_seq, int len_seq, int *len_lis);
void				empty_stack_b(t_stacks *stack, t_cmd *cmd);
void				stack_align(t_stacks *stack, t_cmd *cmd);
void				ft_exit_free_all(t_stacks *stack);
int					find_min_lst(t_stack *stack);
int					find_max_lst(t_stack *stack);
int					*lst_to_arr_index(t_stack *a);
int					find_max_arr(int *arr, int len);
int					count_op(int a, int b);
int					check_dup(t_stacks *stack);
void				exit_and_free(int *sub_seq, int *stack_a_arr,
						t_stacks *stack);
void				three_sort(t_stacks *stack, t_cmd *cmd);
void				five_sort(t_stacks *stack, t_cmd *cmd, int *stack_a_arr);
void				op_sa(t_stacks *stack, int verbose);
void				op_sb(t_stacks *stack, int verbose);
void				op_ss(t_stacks *stack, int verbose);
void				op_pa(t_stacks *stack, int verbose);
void				op_pb(t_stacks *stack, int verbose);
void				op_ra(t_stacks *stack, int verbose);
void				op_rb(t_stacks *stack, int verbose);
void				op_rr(t_stacks *stack, int verbose);
void				op_rra(t_stacks *stack, int verbose);
void				op_rrb(t_stacks *stack, int verbose);
void				op_rrr(t_stacks *stack, int verbose);

#endif
