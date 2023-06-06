/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 21:09:57 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/05 21:10:01 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = ((unsigned char *)s1);
	p2 = ((unsigned char *)s2);
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (p1[i] - p2[i] == 0)
			i++;
		else
			return (p1[i] - p2[i]);
	}
	return (p1[i] - p2[i]);
}
