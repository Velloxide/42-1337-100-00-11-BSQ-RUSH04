/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 15:28:01 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/28 18:22:25 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	if (ba[0] == '\0' || ba[1] == '\0')
		return (0);
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

int	ft_atoi_base(char *nbr, char *base_from, int len_from)
{
	int	res;
	int	sign;

	while (*nbr && ((*nbr >= 9 && *nbr <= 13) || *nbr == 32))
		nbr++;
	sign = 1;
	while (*nbr && (*nbr == '-' || *nbr == '+'))
	{
		if (*nbr == '-')
			sign = -sign;
		nbr++;
	}
	res = 0;
	while (*nbr && ft_get_index(*nbr, base_from) != -1)
	{
		res = (res * len_from) + ft_get_index(*nbr, base_from);
		nbr++;
	}
	return (res * sign);
}
