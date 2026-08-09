/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 13:30:27 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/25 21:08:18 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb <= 0)
	{
		if (nb < 0)
			return (0);
		return (1);
	}
	res = nb;
	while (nb > 1)
	{
		res = res * (nb - 1);
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}
*/
