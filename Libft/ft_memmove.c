/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 00:13:40 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/05 00:43:29 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (dst == 0 && src == 0)
		return (dst);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
    char str1[] = "Hello, world!";
    char str2[] = "Goodbye, world!";

    printf("Before ft_memmove, str1 is: %s\n", str1);
    printf("Before ft_memmove, str2 is: %s\n", str2);

    // Move str1 to str2
    ft_memmove(str2, str1, 8);

    printf("After ft_memmove, str1 is: %s\n", str1);
    printf("After ft_memmove, str2 is: %s\n", str2);

    return 0;
}
*/
