/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:04:26 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/25 18:44:42 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*ptr;

	if (argc < 2)
		return (0);
	i = argc - 1;
	while (i > 0)
	{
		ptr = argv[i];
		while (*ptr)
			ptr++;
		write(1, argv[i], (ptr - argv[i]));
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
