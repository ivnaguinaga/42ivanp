/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:41:34 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/10 20:02:51 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*dst;
	size_t			new_len;

	i = 0;
	j = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	dst = malloc(len + 1);
	if (!(s) || !(dst))
		return (0);
	while (j < (unsigned int)len)
	{
		dst[j] = s[j + start];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
/*
int main(void)
{
	char const *s = "start";
	unsigned int start = 1;
	size_t len = 4;
	char *test = ft_substr(s, start, len);
	printf("%s", test);
}
*/