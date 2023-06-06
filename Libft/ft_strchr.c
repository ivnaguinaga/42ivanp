/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:50:01 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/05 18:50:02 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	j;
	int		i;

	j = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			return ((char *)(s + i));
		else
			i++;
	}
	if (j != '\0')
		return (0);
	else
		return ((char *)(s + i));
}
/*
int	main(void)
{
	const char *s = "Hola";
	int c = 82;
	char *p = ft_strchr(s, c);
	printf ("%s", p);
	return 0;
}
*/