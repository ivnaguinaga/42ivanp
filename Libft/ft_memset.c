/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:36:47 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/04 23:42:37 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main(void)
{
    int arr[] = {0};
    size_t arr_len = sizeof(arr) / sizeof(arr[0]);

    // Imprime el arreglo original
    printf("Arreglo original:\n");
    for (size_t i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Establece los primeros tres bytes del arreglo en 0
    ft_memset(arr, 0, 1 * sizeof(int));

    // Imprime el arreglo modificado
    printf("Arreglo modificado:\n");
    for (size_t i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/
