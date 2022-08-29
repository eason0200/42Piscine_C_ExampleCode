/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cping-xu <cping-xu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:11:05 by cping-xu          #+#    #+#             */
/*   Updated: 2022/08/28 17:48:07 by cping-xu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "function.h" //	preprocessor statement

int	initboard(int *input);   //function prototype

int	checkrepeat(char *input) //there must be only 4 "1" in puzzle clues
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (input[i])           //there is 16 digits (0 to 15)[index]
	{
		if (input[i] == '1')   //counting occurence of "1"
			temp++;
		i++;
	}
	if (temp != 4)          
		return (0);				//"1" occurs more or less than 4 times
	return (1);					//this happens when there are 4 "1"
}

int	checkinput(char *arg, int *input)       //used in int main
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	if (checkrepeat(arg) == 1) //there is 4 "1" as clues(validation check 1)
	{
		while (arg[i])
		{
			if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
					|| ((arg[i + 1] == 0) && (arg[i - 1] == ' '))))
			{
				input[out] = (arg[i] - '0');  //converting char to integer(ascii table)
				out++;							// out will incease until out = 16
				i++;
			}
			if ((arg[i] >= 9 && arg[i] <= 13) || arg[i] == 32) //whitespace character in ascii table
				i++;
			else
				return (out);
		}
		input[out] = '\0';
		return (out);            //output(out) is  16 because there is only 16 digits in solution space
	}
	return (0);              //fail validation check 1
}

int	main(int argc, char **argv)
{
	int	input[16];

	if (argc != 2)                             
	{
		ft_putstr("ERROR\n");    
	}
	else
	{
		if (checkinput(argv[1], input) == 16)  //16 number in solution space only
			initboard(input);
		else
			ft_putstr("ERROR\n");
	}
	return (0);
}
