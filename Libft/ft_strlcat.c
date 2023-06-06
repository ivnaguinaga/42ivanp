/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:54:23 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/04 19:33:31 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (((unsigned char *)dst)[i] != '\0')
		i++;
	if (i >= dstsize)
		len = dstsize;
	else
	{
		len = i;
		j = 0;
		while (src[j] != '\0' && i < dstsize - 1)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[j];
			i++;
			j++;
		}
		((unsigned char *)dst)[i] = '\0';
	}
	return (ft_strlen((const char *)src) + len);
}
/*
int main(void)
{
    char    str1[20]="holaquetal";
    char    str2[20]="comvas";
    char    str3[20]="holaquetal";
    char    str4[20]="comvas";
    int     n = 20;
    printf("dstsize: %d\n\n", n);
    printf("src: %s\n", str2);
    printf("dst before strlcat: %s\n", str1);
    printf("%zu\n", strlcat(str1, str2, n));
    printf("dst after strlcat: %s\n", str1);
    printf("\n");
    printf("src: %s\n", str4);
    printf("dst before ft_strlcat: %s\n", str3);
    printf("%zu\n", ft_strlcat(str3, str4, n));
    printf("dst after ft_strlcat: %s\n", str3);
}
*/
