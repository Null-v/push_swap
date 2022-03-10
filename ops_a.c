/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:28:10 by edi-marc          #+#    #+#             */
/*   Updated: 2022/03/08 15:51:03 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	n;

	n = a->n;
	while (n-- > 0)
		a->i[n + 1] = a->i[n];
	a->i[0] = b->i[0];
	a->n++;
	n = 0;
	while (++n < b->n)
		b->i[n - 1] = b->i[n];
	b->n--;
	ft_putendl_fd("pa", 1);
}

void	ra(t_stack *a)
{
	int	first;
	int	n;

	first = a->i[0];
	n = 0;
	while (++n < a->n)
		a->i[n - 1] = a->i[n];
	a->i[a->n - 1] = first;
	ft_putendl_fd("ra", 1);
}

void	rra(t_stack *a)
{
	int	last;
	int	n;

	n = a->n - 1;
	last = a->i[n];
	while (n-- > 0)
		a->i[n + 1] = a->i[n];
	a->i[0] = last;
	ft_putendl_fd("rra", 1);
}

void	sa(t_stack *a)
{
	int	t;

	t = a->i[0];
	a->i[0] = a->i[1];
	a->i[1] = t;
	ft_putendl_fd("sa", 1);
}
