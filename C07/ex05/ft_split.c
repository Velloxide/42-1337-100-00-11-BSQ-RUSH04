/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 20:53:51 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/01 18:21:52 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_words(unsigned char *str, unsigned char *buf)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && buf[*str] == 1)
			str++;
		if (*str && buf[*str] == 0)
			count++;
		while (*str && buf[*str] == 0)
			str++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
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
	return ;
}

char	**ft_split(char *str, char *charset)
{
	unsigned char	buf[256];
	char			**strs;
	int				words;
	int				i;

	i = 0;
	while (i < 256)
		buf[i++] = 0;
	while (*charset)
		buf[(unsigned char)*charset++] = 1;
	words = ft_count_words((unsigned char *)str, buf);
	strs = malloc((words + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	ft_strdup(strs, (unsigned char *)str, buf);
	strs[words] = NULL;
	return (strs);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	char	**strs;
	int		i;

	if (ac != 3)
		return (0);
	strs = ft_split(av[1], av[2]);
	i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}
