/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:12:05 by cping-xu          #+#    #+#             */
/*   Updated: 2022/08/28 18:33:30 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "function.h"

void	printgrid(int board[4][4])  //print the ans
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[row][col] + '0');  //converting int to char
			if (col == 3)
			{
				col++;
			}
			else
			{
				ft_putchar(' ');
				col++;
			}
		}
		ft_putchar('\n');                     //so the 16 values wont be in a line
		row++;
	}
}
