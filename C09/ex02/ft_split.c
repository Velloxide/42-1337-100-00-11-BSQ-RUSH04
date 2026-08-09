/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 17:50:31 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/01 18:45:15 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count(unsigned char *str, unsigned char *buf)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && buf[*str])
			str++;
		if (*str && !buf[*str])
			i++;
		while (*str && !buf[*str])
			str++;
	}
	return (i);
}

void	ft_strdup(char **strs, unsigned char *str, unsigned char *buf)
{
	unsigned char	*ptr;
	int				i;
	int				j;

	i = 0;
	while (*str)
	{
		while (*str && buf[*str])
			str++;
		if (*str)
		{
			ptr = str;
			while (*ptr && !buf[*ptr])
				ptr++;
			strs[i] = malloc((ptr - str + 1) * sizeof(char));
			if (!strs[i])
				return ;
			j = 0;
			while (*str && !buf[*str])
				strs[i][j++] = *str++;
			strs[i][j] = '\0';
			i++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	unsigned char	buf[256];
	char			**map;
	int				words;
	int				i;

	i = 0;
	while (i < 256)
		buf[i++] = 0;
	i = 0;
	while (charset[i])
		buf[(unsigned char)charset[i++]] = 1;
	words = ft_count((unsigned char *)str, buf);
	map = malloc((words + 1) * sizeof(char *));
	if (!map)
		return (0);
	map[words] = NULL;
	ft_strdup(map, (unsigned char *)str, buf);
	return (map);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**ptr;

	ptr = ft_split(argv[1], argv[2]);
	while (*ptr)
	{
		printf("%s\n", *ptr);
			ptr++;
	}
}
*/
