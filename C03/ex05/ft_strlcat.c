/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:46:33 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/22 12:08:45 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_src = ft_count_len(src);
	len_dest = ft_count_len(dest);
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dest + i) < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_src + len_dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src;
	char	dest[8] = "hello ";
	unsigned int	size;
	int	n;

	size = 8;
	src = "said 1337";
	n = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%d\n", n);
}
*/
