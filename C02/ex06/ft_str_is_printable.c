/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 21:40:11 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/19 21:52:12 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprintable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_isprintable(*str++))
			return (0);
	}
	return (1);
}
