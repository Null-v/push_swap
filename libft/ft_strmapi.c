/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:51:51 by edi-marc          #+#    #+#             */
/*   Updated: 2021/08/04 18:41:55 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	len;
	size_t	i;

	p = NULL;
	i = 0;
	if (s && f)
	{
		len = ft_strlen(s);
		p = ft_calloc(len + 1, sizeof(*p));
		if (p)
		{
			while (i < len)
			{
				p[i] = f(i, s[i]);
				i++;
			}
		}
	}
	return (p);
}
