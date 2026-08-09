/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 15:38:04 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/25 15:44:10 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * (ft_recursive_factorial(nb - 1)));
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = ft_recursive_factorial(5);
	printf("%d", nb);
}
*/
