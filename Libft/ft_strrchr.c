/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:50:01 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/05 18:50:02 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	j;
	int		i;
	int		k;

	j = (char) c;
	i = 0;
	k = -1;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			k = i;
		i++;
	}
	if (k != -1)
		return ((char *)(s + k));
	if (j == '\0')
		return ((char *)(s + i));
	return (0);
}
/*
int	main(void)
{
	const char *s = "Hola 2 7";
	int c = 32;
	char *p = ft_strchr(s, c);
	printf ("%s", p);
	return 0;
}
*/