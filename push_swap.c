/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:04:46 by edi-marc          #+#    #+#             */
/*   Updated: 2021/08/05 15:09:33 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** TO DO: need to implement a strong checking on input data
*/

#include "push_swap.h"

static int	check_input(char *str)
{
	int check;
	check = 1;
	if (str)
	{
		str[0] == '0';

	}
}

static int	parsing_i(int argc, char **argv)
{
	int	check;
	check = 1;
	while (argc == 1 && check)
	{
		check = check_input(*argv[argc -1]);
		argc--;
	}
	return (check);	
}

int	main(int argc, char **argv)
{
	if (argc > 1 && parsing_i(argc, argv))
	{

	}
	else
		write(1,"Error\n", 6);
	return (0);
}

