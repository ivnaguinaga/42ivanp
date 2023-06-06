/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:01:39 by iaguinag          #+#    #+#             */
/*   Updated: 2023/05/22 18:44:51 by iaguinag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	digitcount(int n)
{
	int				i;
	unsigned int	n2;

	i = 0;
	if (n == 0)
		return (1);
	if (n > 0)
		n2 = (unsigned int)n;
	else
		n2 = (unsigned int)(n * -1);
	while (n2 > 0)
	{
		n2 = n2 / 10;
		i++;
	}
	return (i);
}

static char	*ft_itoa2(int n)
{
	static char		nbr[12];
	int				i;
	int				sign;
	unsigned int	n2;

	sign = 0;
	i = digitcount(n);
	if (n < 0)
		sign = 1;
	if (n < 0)
		n2 = (unsigned int)(n * -1);
	else
		n2 = (unsigned int)n;
	nbr[i + sign--] = '\0';
	while (i + sign >= sign + 1)
	{
		nbr[i-- + sign] = (n2 % 10) + '0';
		n2 /= 10;
	}
	if (sign == 0)
		nbr[i] = '-';
	return (nbr);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*dst;

	dst = ft_itoa2(n);
	ft_putstr_fd(dst, fd);
}
