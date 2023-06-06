/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:30:18 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/05 20:30:20 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		j = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (j == 0)
			i++;
		else
			return (j);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
{
    char str1[] = "hellooo";
    char str2[] = "helloooo";
	unsigned int n = 8;
    int result;

    result = ft_strncmp(str1, str2, n);

    if (result == 0)
        printf("Las cadenas son iguales\n");
    else if (result < 0)
        printf("'%s' es menor que '%s'\n", str1, str2);
    else
        printf("'%s' es mayor que '%s'\n", str1, str2);

    return 0;
}
*/
