/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:52:38 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/24 17:05:08 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*aux;

	if (*lst)
		temp = *lst;
	else
		return ;
	while (temp)
	{
		aux = temp->next;
		del(temp->content);
		free(temp);
		temp = aux;
	}
	*lst = NULL;
}
