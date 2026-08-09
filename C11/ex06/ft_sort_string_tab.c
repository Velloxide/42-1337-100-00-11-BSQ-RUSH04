/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 22:56:11 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/02 23:15:26 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_sort_string_tab(char **tab)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_cmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	*tab[] = {"11", "00", "22", "33", "77", "66", "55", "44", "99",
			"88", NULL};
	int		i;

	i = 0;
	while (tab[i])
		printf("%s, ", tab[i++]);
	ft_sort_string_tab(tab);
	printf("\n");
	i = 0;
	while (tab[i])
		printf("%s, ", tab[i++]);
	return (0);
}
*/
