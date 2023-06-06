/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:02:35 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/22 18:52:12 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	isset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*dst;
	size_t		len;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!(s1) || !(set))
		return (0);
	len = ft_strlen(s1);
	while (isset(s1[i], set) && s1[i])
		i++;
	while (len != 0 && isset(s1[len - 1], set))
		len--;
	if (len < i)
		len = i;
	dst = malloc((len - i + 1) * sizeof(char));
	if (!(dst))
		return (0);
	while (i < len)
		dst[j++] = s1[i++];
	dst[j] = '\0';
	return (dst);
}
