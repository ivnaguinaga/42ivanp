/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:52:36 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/05 00:12:55 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
		return (dst);
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
/*
int main() {
    char src[] = "Hola, mundo!";
    char dst[20] = "Adios";
    char *j;

    printf("Antes de memcpy, dst es: %s\n", dst);

    // Copiar src en dst
    j = memcpy(dst, src, strlen(src) + 1);

    printf("Despues de memcpy, dst es: %s\n", dst);
    printf("%s", j);

    return 0;
}
*/
