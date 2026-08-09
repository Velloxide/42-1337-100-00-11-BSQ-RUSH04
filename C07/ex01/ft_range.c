/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 13:42:02 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/27 21:36:10 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*buf;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	buf = malloc(len * sizeof(int));
	if (!buf)
		return (NULL);
	i = 0;
	while (min < max)
	{
		buf[i] = min;
		min++;
		i++;
	}
	return (buf);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	*buf;
	int	min;
	int	max;
	int	i;

	min = atoi(av[1]);
	max = atoi(av[2]);
	buf = ft_range(min, max);
	if (!buf)
		return (0);
	i = 0;
	while (min < max)
	{
		printf("%d\n", buf[i]);
		min++;
		i++;
	}
}
*/
