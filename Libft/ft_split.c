/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 20:31:24 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/22 18:50:30 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static size_t	wordcount(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

static size_t	lettercount(char const *s, char c, int k)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	l = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (i == 0 || s[i - 1] == c))
			j++;
		if (j == k + 1 && s[i] != c)
			l++;
		i++;
	}
	return (l);
}

static size_t	start(char const *s, char c, int k)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	l = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		if (j == k + 1 && s[i] != c)
			l++;
		if ((l != 0 && j > k + 1)
			|| (j == k + 1 && s[i] == c && s[i - 1] == c))
			return (i - l - 1);
		i++;
	}
	if (s[i - 1] == c)
		return (i - l - 1);
	else
		return (i - l);
}

static char	**ft_free(char const **dst, int i)
{
	while (i >= 0)
	{
		free((void *)dst[i]);
		i--;
	}
	free(dst);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	dst = malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!(dst))
		return (0);
	while (i < (wordcount(s, c)))
	{
		dst[i] = malloc((lettercount(s, c, i) + 1) * sizeof(char));
		if (!(dst[i]))
			return (ft_free((char const **)dst, (int)i));
		j = 0;
		while (j < (lettercount(s, c, i)))
		{
			dst[i][j] = s[start(s, c, i) + j];
			j++;
		}
		dst[i][j] = '\0';
		i++;
	}
	dst[i] = 0;
	return (dst);
}

/*
int main(void)
{
	char const *s = "helloz";
	char c = 'z';
	char **t = ft_split(s, c);
	int	te = wordcount(s, c);
	int tes = lettercount(s, c, 0);
	int test = start(s, c, 0);
	
	if (t != NULL)
	{
		int i = 0;
		while (t[i] != NULL)
		{
			printf("%d", te);
			printf("%d", tes);
			printf("%d", test);
			printf("%s\n", t[i]);
			i++;
		}
	}
}
*/