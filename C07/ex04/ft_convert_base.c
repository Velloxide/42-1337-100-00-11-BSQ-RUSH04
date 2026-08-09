/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 15:27:49 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/28 23:47:02 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_chake_base(char *ba, int *base_len);
int		ft_atoi_base(char *nbr, char *base_from, int len_from);

int	ft_size_number(long nbr, int base)
{
	int		size;

	if (nbr == 0)
		return (1);
	size = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		size++;
	}
	while (nbr)
	{
		nbr /= base;
		size++;
	}
	return (size);
}

char	*ft_itoa_base(long nbr, char *base_to, int len_to, int len_nbr)
{
	char	*buf;

	buf = malloc((len_nbr + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	buf[len_nbr--] = '\0';
	if (nbr < 0)
	{
		buf[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		buf[0] = base_to[0];
	while (nbr)
	{
		buf[len_nbr--] = base_to[nbr % len_to];
		nbr /= len_to;
	}
	return (buf);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	len_from;
	int	len_to;
	int	len_nbr;
	int	nb;

	if (!ft_chake_base(base_from, &len_from) || !ft_chake_base(base_to,
			&len_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from, len_from);
	len_nbr = ft_size_number((long)nb, len_to);
	return (ft_itoa_base((long)nb, base_to, len_to, len_nbr));
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*ptr;

	if (ac != 4)
		return (0);
	ptr = ft_convert_base(av[1], av[2], av[3]);
	printf("%s", ptr);
}
*/
