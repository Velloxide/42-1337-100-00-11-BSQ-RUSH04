/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:53:14 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/02 18:36:16 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	rem;
	int	nb;
	int	i;

	i = 0;
	rem = 0;
	while (i < length - 1)
	{
		nb = f(tab[i], tab[i + 1]);
		if (nb < 0)
		{
			if (rem == 1)
				return (0);
			rem = -1;
		}
		else if (nb > 0)
		{
			if (rem == -1)
				return (0);
			rem = 1;
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	checksort(int a, int b)
{
	return (a - b);
}
int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	nb;

	nb = ft_is_sort(tab, 10, checksort);
	printf("%d\n", nb);
}
*/
