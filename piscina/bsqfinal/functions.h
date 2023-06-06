/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre-o <jandre-o@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:44:24 by jandre-o          #+#    #+#             */
/*   Updated: 2023/04/19 20:59:49 by jandre-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_is_valid(char map[height][width], int *row, int *col, int *d);
void	fill_map(char map[height][width], int row, int col, int d);
void	print_sol(char map[height][width], int d);
void	validate(char map[height][width], int row, int col, int d);
int		ft_is_valid(char map[height][width], int *row, int *col, int *d);
void	print_sol(char map[height][width]);

#endif
