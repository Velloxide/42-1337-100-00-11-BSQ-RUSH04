/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 15:15:09 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/02 15:51:48 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < length)
		if (f(tab[i++]))
			count++;
	return (count);
}
/*
#include <stdio.h>

int	ft_checko(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] == 'o')
			return (1);
	return (0);
}
int	main(void)
{
	char	*tab[] = {"hell", "saoid", "okilwa", "mazoaj", NULL};
	int		nb;

	nb = ft_count_if(tab, 4, ft_checko);
	printf("%d\n", nb);
}
*/
