/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboutay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 23:01:55 by saboutay          #+#    #+#             */
/*   Updated: 2026/07/20 20:41:53 by saboutay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_alpha(char c)
{
	if (((c >= 'a' && c <= 'z')) || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void	ft_lowcase(char *c)
{
	if ((*c >= 'A' && *c <= 'Z'))
		*c += 32;
}

void	ft_flagcase(char c, int *flag)
{
	if (!ft_is_alpha(c))
	{
		if (ft_isnbr(c))
			*flag = 0;
		else
			*flag = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	if (!str)
		return (0);
	i = 0;
	flag = 1;
	while (str[i])
	{
		if (ft_is_alpha(str[i]))
		{
			ft_lowcase(&str[i]);
			if ((str[i] >= 'a' && str[i] <= 'z') && flag)
			{
				str[i] -= 32;
				flag = 0;
			}
		}
		ft_flagcase(str[i], &flag);
		i++;
	}
	return (str);
}
