/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:59:09 by iaguinag          #+#    #+#             */
/*   Updated: 2023/04/19 20:59:59 by jandre-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	print_sol(char map[height][width])
{
	int	i;
	int	j;

	j = 0;
	while (j < height)
	{
		i = 0;
		while (i < width)
		{
			write (1, &map[j][i], 1);
			++i;
		}
		j++;
	}
	write (1, "\n", 1);
}
