/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 00:37:26 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/27 20:28:07 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len_str;
	char	*aloc;

	len_str = ft_strlen(src);
	aloc = malloc((len_str + 1) * sizeof(char));
	if (!aloc)
		return (0);
	i = 0;
	while (src[i])
	{
		aloc[i] = src[i];
		i++;
	}
	aloc[i] = '\0';
	return (aloc);
}
/*
#include <stdio.h>
int	main(int ac, char **argv)
{
	char	*src;
	char	*ptr;

	src = argv[1];
	ptr = ft_strdup(src);
	printf("%s", ptr);
}
*/
