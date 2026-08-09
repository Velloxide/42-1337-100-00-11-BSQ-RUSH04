/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 22:07:57 by saboutay          #+#    #+#             */
/*   Updated: 2026/08/03 12:22:33 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

int		ft_is_valid(int nb, char oper);
int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_mult(int a, int b);
int		ft_divi(int a, int b);
int		ft_mod(int a, int b);
int		ft_atoi(char *str);
int		ft_operations(int value1, int value2, char oper,
			int (*operations[5])(int, int));
void	ft_do_op(int nbr1, int nbr2, int (*f)(int, int));
void	ft_putnbr(int nb);

#endif
