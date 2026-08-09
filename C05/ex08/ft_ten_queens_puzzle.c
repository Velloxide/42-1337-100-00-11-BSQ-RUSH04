/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 22:18:10 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/26 21:18:29 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putbord(int *bord)
{
	int		y;
	char	c;

	y = 0;
	while (y < 10)
	{
		if (bord[y] != -1)
			c = bord[y] + '0';
		else
			c = '.';
		write(1, &c, 1);
		y++;
	}
	write(1, "\n", 1);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	ft_can_i_sit(int *bord, int row, int col)
{
	int	y;

	y = 0;
	while (y < row)
	{
		if (bord[y] == col)
			return (0);
		if (ft_abs(bord[y] - col) == ft_abs(y - row))
			return (0);
		y++;
	}
	return (1);
}

int	ft_solve_help(int *bord, int row)
{
	int	col;
	int	res;

	if (row == 10)
	{
		ft_putbord(bord);
		return (1);
	}
	res = 0;
	col = 0;
	while (col < 10)
	{
		if (ft_can_i_sit(bord, row, col))
		{
			bord[row] = col;
			res += ft_solve_help(bord, row + 1);
			bord[row] = -1;
		}
		col++;
	}
	return (res);
}

int	ft_ten_queens_puzzle(void)
{
	int	y;
	int	bord[10];

	y = 0;
	while (y < 10)
	{
		bord[y] = -1;
		y++;
	}
	return (ft_solve_help(bord, 0));
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = ft_ten_queens_puzzle();
	printf("%d\n", nb);
}
*/
