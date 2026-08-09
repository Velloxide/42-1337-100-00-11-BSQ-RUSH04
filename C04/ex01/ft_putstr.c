/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:07:37 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/22 14:19:02 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	write(1, str, (int)(ptr - str));
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putstr("hello said");
}
*/
