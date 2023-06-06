/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ltest0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:29:07 by iaguinag          #+#    #+#             */
/*   Updated: 2023/04/19 20:53:45 by jandre-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	validate(char map[height][width], int row, int col, int d);

int	ft_is_valid(char map[height][width], int *row, int *col, int *d)
{
	int	i;
	int j;
	printf("ft_is_valid - row: %d, col: %d\n", *row, *col);
	while (*d > 0)
	{
		*row = 0;
		while (*row + *d - 1 < height)
		{
			*col = 0;
			while (*col + *d - 1 < width)
			{
				j = 0;	
				while (j < *d)
				{
					i = 0;
					while (i < *d)
					{
						if (map[*row + j][*col + i] == 'o')
						{
							i = *d;
							j = *d;
						}
						else
						{
							++i;
							if (j + 1 == *d && i + 1 == *d)
							{
								//printf("ft_is_valid - row: %d, col: %d\n", row, col);
								return (1);
							}
						}
					}
					++j;
				}
				*col = *col + 1;
			}
			*row = *row + 1;
		}
		*d = *d - 1;
	}
	return (0);
}
/*
int main(void)
{
	int	i;
	int	j;
	char map[9][28];

	j = 0;
	while (j < 9)
	{
		i = 0;
		while (i < 27)
		{
			map[j][i] = '.';
			++i;
		}
		map[j][27] = '\n';
		++j;
	}
	map[1][4] = 'o';
	map[2][12] = 'o';
	map[4][4] = 'o';
	map[5][14] = 'o';
	map[7][6] = 'o';
	map[7][21] = 'o';
	map[8][2] = 'o';
	map[8][10] = 'o';
	validate(map, 0, 0 ,9);
}
*/
