/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:25:29 by iaguinag          #+#    #+#             */
/*   Updated: 2023/04/19 20:58:10 by jandre-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	fill_map(char map[height][width], int row, int col, int d)
{
	int	i;
	int	j;

	j = 0;
	while (j < d)
	{
		i = 0;
		while (i < d)
		{
			map[row + j][col + i] = 'x';
			++i;
		}
		++j;
	}
}
