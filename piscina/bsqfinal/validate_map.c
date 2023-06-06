/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaguinag <iaguinag@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:46:31 by iaguinag          #+#    #+#             */
/*   Updated: 2023/04/19 20:57:13 by jandre-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

void	validate(char map[height][width], int row, int col, int d)
{
	if (ft_is_valid(map, &row, &col, &d))
	{
		fill_map(map, row, col, d);
		print_sol(map, d);
	}
	else
		write(1, "Map Error", 9);
}
