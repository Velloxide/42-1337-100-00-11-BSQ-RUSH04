/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:58:51 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/28 17:50:01 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_chaek_base(char *base, int *len_base)
{
	int	count;
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		count = 0;
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j])
				count++;
			j++;
		}
		if (count != 1 || base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	*len_base = i;
	return (1);
}

void	ft_solve_help(long nb, unsigned char *base, int len_base)
{
	if (nb >= len_base)
		ft_solve_help(nb / len_base, base, len_base);
	write(1, &base[nb % len_base], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long	nb;

	if (!base[0] || !base[1] || !ft_chaek_base(base, &len_base))
		return ;
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_solve_help(nb, (unsigned char *)base, len_base);
	return ;
}
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	ft_putnbr_base(atoi(av[1]), av[2]);
	return (0);
}
