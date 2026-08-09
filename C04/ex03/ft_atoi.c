/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 15:41:59 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/22 16:54:20 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	res;

	while (*str && (*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	sign = 1;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	res = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;

	nb = ft_atoi(" \t\n\n+-1234ab567");
	printf("%d", nb);
}
*/
