/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:48:10 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/03 20:48:12 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		++len;
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (len);
}
/*
int main(void)
{
    char src[] = "Hello, World!"; // Source string
    char dest[20]; // Destination string with enough buffer size
    unsigned int size = sizeof(dest); // Size of the destination buffer
    unsigned int result; // Result of ft_strlcpy function

    printf("Source string: %s\n", src);
    printf("Destination buffer size: %u\n", size);
    printf("Copying source string to destination with size limit...\n");

    // Call ft_strlcpy function to copy src to dest with size limit
    result = ft_strlcpy(dest, src, size);

    printf("Destination string: %s\n", dest);
    printf("Result of ft_strlcpy function: %u\n", result);

    return 0;
}
*/