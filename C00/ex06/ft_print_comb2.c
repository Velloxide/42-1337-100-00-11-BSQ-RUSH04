/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:20:26 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/16 18:58:46 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c += 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(i / 10);
			ft_putchar(i % 10);
			write(1, " ", 1);
			ft_putchar(j / 10);
			ft_putchar(j % 10);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
