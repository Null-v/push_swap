/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:47:46 by edi-marc          #+#    #+#             */
/*   Updated: 2022/03/08 22:25:41 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack_ordered(t_stack *a)
{
	int	n;

	n = a->n;
	while (n-- > 1)
		if (a->i[n] < a->i[n - 1])
			return (0);
	return (1);
}

int	check_stack_valid(t_stack *a)
{
	int	count;
	int	i;
	int	j;

	if (a->n == 1 && a->arr[0] == 0)
		return (1);
	count = a->n;
	i = 0;
	while (i < count -1)
	{
		j = i + 1;
		while (j < count)
		{
			if (a->arr[i] == a->arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	read_stack(char **av, t_stack *a)
{
	char	*s;
	char	*t;

	s = ft_strdup("");
	while (*(++av))
	{
		t = ft_strjoin(s, *av);
		free(s);
		s = t;
		t = ft_strjoin(s, " ");
		free(s);
		s = t;
	}
	a->n = ft_d_count(s);
	if (a->n < 1 || !ft_split_atoi(s, a))
	{
		free(t);
		return (0);
	}
	free(t);
	if (!check_stack_valid(a))
		return (0);
	set_index(a);
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	if (ac <= 1)
		return (-1);
	else if (!read_stack(av, &a))
	{
		ft_putendl_fd("Error", 2);
		free_stacks(&a, &b);
		exit (EXIT_FAILURE);
	}
	else if (check_stack_ordered(&a))
	{
		free_stacks(&a, &b);
		return (0);
	}
	else
		order_stack(&a, &b);
	free_stacks(&a, &b);
	return (0);
}
