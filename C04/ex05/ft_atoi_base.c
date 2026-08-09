/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 20:39:06 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/28 18:25:06 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_whites(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_chake_base(char *ba, int *base_len)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (ba[i])
	{
		c = 0;
		j = 0;
		while (ba[j])
		{
			if (ba[i] == ba[j])
				c++;
			j++;
		}
		if (c != 1 || ba[i] == '-' || ba[i] == '+' || ft_whites(ba[i]))
			return (0);
		i++;
	}
	*base_len = i;
	return (1);
}

int	ft_get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	base_len;
	int	sign;

	if (!base[0] || !base[1] || !ft_chake_base(base, &base_len))
		return (0);
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	sign = 1;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	res = 0;
	while (*str && ft_get_index(*str, base) != -1)
	{
		res = (res * base_len) + ft_get_index(*str, base);
		str++;
	}
	return (res * sign);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	int	nb;

	if (ac != 3)
	{
		printf("str1: \"\\t  -+-+-101010\"\nstr2: \"01\"\n");
		return (0);
	}
	nb = ft_atoi_base(av[1], av[2]);
	printf("%d", nb);
}
