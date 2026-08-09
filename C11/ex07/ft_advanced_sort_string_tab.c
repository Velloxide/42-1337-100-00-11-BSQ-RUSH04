/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 23:16:58 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/03 15:47:00 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*tmp;
	int		i;
	int		j;

	if (!tab || !cmp)
		return ;
	i = 0;
	while (tab[i] && tab[i + 1])
	{
		j = 0;
		while (tab[j + i + 1])
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	ft_cmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s2 - (unsigned char)*s1);
}
int	main(void)
{
	char	*tab[] = {"11", "00", "22", "33", "77", "66", "55", "44", "99",
			"88", NULL};
	int		i;

	i = 0;
	while (tab[i])
		printf("%s, ", tab[i++]);
	ft_advanced_sort_string_tab(tab, ft_cmp);
	if (!tab)
		return (0);
	printf("\n");
	i = 0;
	while (tab[i])
		printf("%s, ", tab[i++]);
	return (0);
}
*/
