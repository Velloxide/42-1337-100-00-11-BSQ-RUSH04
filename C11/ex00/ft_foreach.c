/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 11:51:16 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/02 12:07:45 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <stdio.h>

void	ft_dublenbr(int nb)
{
	printf("%d\n", (nb + nb));
}
int	main(void)
{
	int	tab[] = {1, 5, 3, 10};

	ft_foreach(tab, 4, ft_dublenbr);
}
*/
