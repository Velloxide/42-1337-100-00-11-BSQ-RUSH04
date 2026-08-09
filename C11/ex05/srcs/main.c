/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:51:50 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/03 12:16:45 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_is_valid(int nb, char oper)
{
	if (nb == 0 && (oper == '/' || oper == '%'))
	{
		if (oper == '/')
			write(1, "Stop : division by zero\n", 24);
		else
			write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	value1;
	int	value2;
	int	(*operations[5])(int, int);

	operations[0] = &ft_sum;
	operations[1] = &ft_sub;
	operations[2] = &ft_mult;
	operations[3] = &ft_divi;
	operations[4] = &ft_mod;
	if (argc != 4)
		return (0);
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	if (!ft_is_valid(value2, argv[2][0]))
		return (0);
	ft_operations(value1, value2, argv[2][0], operations);
	return (0);
}
