/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 22:02:32 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/28 15:19:44 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_cpy(char *ptr, char **src, int size, char *sep)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		while (src[j][i])
			ptr[len++] = src[j][i++];
		i = 0;
		if (j++ < size - 1)
			while (sep[i])
				ptr[len++] = sep[i++];
	}
	ptr[len] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		len;
	int		i;

	if (size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	i = 0;
	len = 0;
	while (i < size)
		len += ft_len(strs[i++]);
	ptr = malloc((len + (ft_len(sep) * (i - 1)) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_cpy(ptr, strs, size, sep);
	return (ptr);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*strs[5];
	char	*sep;
	char	*ptr;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = av[1];
	str2 = av[2];
	str3 = av[3];
	str4 = av[4];
	str5 = av[5];
	if (ac < 4)
		return (0);
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;
	ptr = ft_strjoin(ac - 2, strs, av[ac - 1]);
	printf("%s", ptr);
}
*/
