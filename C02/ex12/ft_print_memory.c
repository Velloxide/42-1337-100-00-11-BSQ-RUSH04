/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:04:16 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/25 17:51:07 by Velloxide        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_addr(unsigned long addr)
{
	char	*buf;
	int		i;
	int		c;

	buf = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		c = (addr >> (4 * i)) & 15;
		write(1, &buf[c], 1);
		i--;
	}
	write(1, ": ", 2);
}

void	ft_print_hex(unsigned char *addr, unsigned int size)
{
	unsigned int	i;
	char			*buf;

	buf = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			write(1, &buf[addr[i] / 16], 1);
			write(1, &buf[addr[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_printstr(char *str, unsigned int size)
{
	unsigned int	i;
	char			c;

	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			c = '.';
			if (str[i] >= 32 && str[i] <= 126)
				c = str[i];
			write(1, &c, 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	crrsize;

	i = 0;
	while (i < size)
	{
		crrsize = size - i;
		ft_print_addr((unsigned long) addr + i);
		ft_print_hex((unsigned char *) addr + i, crrsize);
		ft_printstr((char *) addr + i, crrsize);
		i += 16;
	}
	return (addr);
}

int	main(void)
{
	char	*str = "Bonjour les aminches\t\t\tc\t est fou\ttout\tce \
	qu on peut faire avec\t\t\tprint_memory\t\t\t\tlol\tlol\t \t";
	ft_print_memory(str, 300);
}

