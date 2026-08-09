/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 21:36:51 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/27 22:01:50 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (!*range)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	int	*range;
	int		size;
	int		max;
	int		min;
	int		i;

	min = atoi(av[1]);
	max = atoi(av[2]);
	size = ft_ultimate_range(&range, min, max);
	if(!range)
		return (0);
	i = 0;
	while (i < size)
	{
		printf("%d", range[i]);
		min++;
		i++;
	}
	free(range);
}
*/
