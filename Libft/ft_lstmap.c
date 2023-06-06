/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:08:53 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/24 18:52:54 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newele;
	t_list	*tmp;

	newlist = 0;
	while (lst)
	{
		tmp = f(lst->content);
		newele = ft_lstnew(tmp);
		if (!newele)
		{
			del(tmp);
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(&newlist, newele);
		lst = lst->next;
	}
	return (newlist);
}
