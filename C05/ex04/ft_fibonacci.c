/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 21:16:58 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/25 21:56:55 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int		res;

	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	printf("%d", ft_fibonacci(atoi(av[1])));
}
*/
