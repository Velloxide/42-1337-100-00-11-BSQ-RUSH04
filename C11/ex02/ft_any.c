/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:56:18 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/02 15:14:18 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
		if (f(tab[i++]))
			return (1);
	return (0);
}
/*
#include <stdio.h>

int	ft_cheaka(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] == 'a')
			return (1);
	return (0);
}
int	main(void)
{
	char	*tab[] = {"hello", "sid", NULL};
	int		nb;

	nb = ft_any(tab, ft_cheaka);
	printf("%d", nb);
	return (0);
}
*/
