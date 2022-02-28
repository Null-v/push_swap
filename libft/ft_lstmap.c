/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:14:55 by edi-marc          #+#    #+#             */
/*   Updated: 2021/08/04 18:28:34 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	new_lst = NULL;
	if (lst && f)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp)
		{
			new_lst = temp;
			lst = lst->next;
		}
		while (lst && new_lst)
		{
			temp = ft_lstnew(f(lst->content));
			if (!temp)
				ft_lstclear(&new_lst, del);
			else
			{
				ft_lstadd_back(&new_lst, temp);
				lst = lst->next;
			}
		}
	}
	return (new_lst);
}
