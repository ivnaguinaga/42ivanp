/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:40:52 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/05 20:40:54 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	j;

	i = 0;
	j = (unsigned char) c;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == j)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (0);
}
