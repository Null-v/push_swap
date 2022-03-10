/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:25:05 by edi-marc          #+#    #+#             */
/*   Updated: 2022/03/09 23:44:03 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	search_i(t_stack *a, t_stack *b, int i)
{
	int	n;

	n = a->n;
	while (n > 0 && a->i[n - 1] != i)
		n--;
	if (n > ((a->n) / 2))
	{
		while (a->i[0] != i)
			rra(a);
	}
	else
	{
		while (a->i[0] != i)
			ra(a);
	}
	pb(a, b);
}

void	sort_three(t_stack *a)
{
	if (!check_stack_ordered(a))
	{
		if (a->i[0] < a->i[1] && a->i[0] < a->i[2])
		{
			sa(a);
			ra(a);
		}
		else if (a->i[0] > a->i[1] && a->i[0] > a->i[2])
		{
			if (a->i[1] > a->i[2])
			{
				sa(a);
				rra(a);
			}
			else
				ra(a);
		}
		else if (a->i[0] < a->i[1] && a->i[0] > a->i[2])
			rra(a);
		else
			sa(a);
	}
}

void	sort_five(t_stack *a, t_stack *b)
{	
	int	i;

	i = 0;
	while (a->n != 3)
		search_i(a, b, ++i);
	sort_three(a);
	while (b->n != 0)
		pa(a, b);
}

void	sort_bits(t_stack *a, t_stack *b, int bit)
{
	int	n;

	n = a->n;
	while (n-- > 0)
	{
		if ((a->i[0] >> bit) & 1)
			ra(a);
		else if (a->n > 2 && !check_stack_ordered(a))
			pb(a, b);
	}
	n = b->n;
	while (n-- > 0)
		pa(a, b);
}

void	order_stack(t_stack *a, t_stack *b)
{
	int		bit;

	if (a->n == 2)
		ra(a);
	else if (a->n == 3)
		sort_three(a);
	else
	{
		b->n = 0;
		b->i = malloc(sizeof(int) * (a->n + 1));
		if (a->n <= 5)
		{
			sort_five(a, b);
			return ;
		}
		bit = 0;
		while (bit < 32 && !check_stack_ordered(a))
		{
			sort_bits(a, b, bit);
			bit++;
		}
	}
}
