/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:28:34 by edi-marc          #+#    #+#             */
/*   Updated: 2022/03/08 15:52:11 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	int	n;

	n = b->n;
	while (n-- > 0)
		b->i[n + 1] = b->i[n];
	b->i[0] = a->i[0];
	b->n++;
	n = 0;
	while (++n < a->n)
		a->i[n - 1] = a->i[n];
	a->n--;
	ft_putendl_fd("pb", 1);
}

void	rb(t_stack *b)
{
	int	first;
	int	n;

	first = b->i[0];
	n = 0;
	while (++n < b->n)
		b->i[n - 1] = b->i[n];
	b->i[b->n - 1] = first;
	ft_putendl_fd("rb", 1);
}

void	rrb(t_stack *b)
{
	int	last;
	int	n;

	n = b->n - 1;
	last = b->i[n];
	while (n-- > 0)
		b->i[n + 1] = b->i[n];
	b->i[0] = last;
	ft_putendl_fd("rrb", 1);
}

void	sb(t_stack *b)
{
	int	t;

	t = b->i[0];
	b->i[0] = b->i[1];
	b->i[1] = t;
	ft_putendl_fd("sb", 1);
}
