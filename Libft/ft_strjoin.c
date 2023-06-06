/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:35:30 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/12 19:39:51 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*dst;
	size_t		i;
	size_t		j;
	size_t		k;	

	i = 0;
	j = 0;
	k = ft_strlen(s1) + ft_strlen(s2);
	dst = malloc(k + 1);
	if (!(dst))
		return (0);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	while (i + j < k)
	{
		dst[j + i] = s2[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}
