/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedlong2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgenesis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:57:36 by pgenesis          #+#    #+#             */
/*   Updated: 2020/02/25 20:57:38 by pgenesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		ft_check_j(char *line, int i)
{
	while (line[i] != 'x')
	{
		if (line[i] == 'j')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putunsignedlong2(unsigned long long int nb)
{
	char						a;
	unsigned long long int		b;

	if (nb >= 10)
		ft_putunsignedlong2(nb / 10);
	b = nb % 10;
	a = '0' + b;
	ft_putchar2(a);
}
