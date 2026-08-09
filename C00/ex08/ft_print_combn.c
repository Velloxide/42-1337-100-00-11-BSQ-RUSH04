/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 13:28:38 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/16 15:34:11 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printbuf(int *buf, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = buf[i] + 48;
		write(1, &c, 1);
		i++;
	}
}

void	ft_solve_help(int *buf, int n, int index, int value)
{
	if (index == n)
	{
		ft_printbuf(buf, n);
		if (buf[index - n] != 10 - n)
			write(1, ", ", 2);
		return ;
	}
	while (value < 10)
	{
		buf[index] = value;
		ft_solve_help(buf, n, index + 1, value + 1);
		value++;
	}
}

void	ft_print_combn(int n)
{
	int	buf[10];

	if (n > 0 && n < 10)
		ft_solve_help(buf, n, 0, 0);
}
