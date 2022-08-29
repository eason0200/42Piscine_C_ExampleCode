/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initboard.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:07:57 by cping-xu          #+#    #+#             */
/*   Updated: 2022/08/28 18:29:23 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "function.h"

int		fillboard(int board[4][4], int *input);

void	printgrid(int board[4][4]);

int	initboard(int *input)
{
	int		row;
	int		col;
	int		board[4][4];

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	if ((fillboard(board, input)) == 1)
		printgrid(board);
	else
		ft_putstr("Error");
	return (0);
}
