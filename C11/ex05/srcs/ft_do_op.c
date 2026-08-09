/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 20:42:10 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/03 12:38:32 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_do_op(int nbr1, int nbr2, int (*f)(int, int))
{
	int	nb;

	nb = f(nbr1, nbr2);
	ft_putnbr(nb);
	write(1, "\n", 1);
}

int	ft_operations(int val1, int val2, char oper, int (*f[5])(int, int))
{
	if (oper == '+')
		ft_do_op(val1, val2, f[0]);
	else if (oper == '-')
		ft_do_op(val1, val2, f[1]);
	else if (oper == '*')
		ft_do_op(val1, val2, f[2]);
	else if (oper == '/')
		ft_do_op(val1, val2, f[3]);
	else if (oper == '%')
		ft_do_op(val1, val2, f[4]);
	else
		write(1, "0\n", 2);
	return (0);
}
