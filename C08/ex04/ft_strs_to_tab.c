/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:36:58 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/29 22:37:28 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src, int len_str)
{
	int		i;
	char	*copy;

	copy = malloc((len_str + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_free(struct s_stock_str *tab, int i)
{
	while (i >= 0)
	{
		free(tab[i].copy);
		i--;
	}
	free(tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].size = ft_strlen(tab[i].str);
		tab[i].copy = ft_strdup(tab[i].str, tab[i].size);
		if (!tab[i].copy)
		{
			ft_free(tab, --i);
			return (NULL);
		}
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	struct s_stock_str	*tab;
	int					i;

	if (argc < 2)
		return (0);
	tab = ft_strs_to_tab(--argc, ++argv);
	if (!tab)
		return (0);
	i = 0;
	while (i < argc)
	{
		printf("size: %d\nstr: %s\ncopy: %s\n-------------------\n",
			tab[i].size, tab[i].str, tab[i].copy);
		i++;
	}
	ft_free(tab, --argc);
	return (0);
}
*/
