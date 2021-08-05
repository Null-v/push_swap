/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:04:46 by edi-marc          #+#    #+#             */
/*   Updated: 2021/08/05 12:16:11 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	parsing_i(int argc, char **argv)
{
	int	check;
	check = 0;
	while (argc == 1)
	{
		if (*argv[argc - 1])
		argc--;
	}
	return (check);	
}

int	main(int argc, char **argv)
{
	if (parsing_i(argc, argv))
	{

	}
	else
		write(1,"Error\n", 6);
	return (0);
}

