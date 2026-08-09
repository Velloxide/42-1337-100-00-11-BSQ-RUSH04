/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 12:09:15 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/02 14:55:18 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*buf;
	int	i;

	buf = malloc(length * sizeof(int));
	if (!buf)
		return (0);
	i = 0;
	while (i < length)
	{
		buf[i] = f(tab[i]);
		i++;
	}
	return (buf);
}
/*
#include <stdio.h>

int	ft_plus2(int nb)
{
	return (nb + 2);
}
int	main(void)
{
	int	tab[] = {1, 4, 8, 1};
	int	*buf;
	int	i;

	i = 0;
	while (i < 4)
		printf("%d ", tab[i++]);
	buf = ft_map(tab, 4, ft_plus2);
	printf("\n");
	i = 0;
	while (i < 4)
		printf("%d ", buf[i++]);
	return (0);
}
*/
