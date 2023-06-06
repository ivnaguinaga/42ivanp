/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:53:39 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/08 17:27:14 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			++j;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*haystack = "¡Hola mundo!";
	const char	*needle = "mundo";
	size_t		len = 12;
	char	*result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("Cadena encontrada: %s\n", result);
    } else {
        printf("Cadena no encontrada.\n");
    }

    return 0;
}
*/