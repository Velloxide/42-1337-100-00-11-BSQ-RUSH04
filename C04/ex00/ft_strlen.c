/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:01:26 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/22 14:05:14 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return ((int)(ptr - str));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_strlen("said"));
}
*/
