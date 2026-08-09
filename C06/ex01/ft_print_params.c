/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:42:39 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/26 00:47:08 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*ptr;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		ptr = argv[i];
		while (*ptr)
			ptr++;
		write(1, argv[i], (ptr - argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
