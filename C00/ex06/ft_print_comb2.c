/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:14:50 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/25 18:42:16 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			if (i != 0 || j != 1)
				ft_putchar (' ');
			ft_putchar ((char)(i / 10) + '0');
			ft_putchar ((char)(i % 10) + '0');
			ft_putchar (' ');
			ft_putchar ((char)(j / 10) + '0');
			ft_putchar ((char)(j % 10) + '0');
			if ((i != 98) || (j != 99))
				ft_putchar(',');
		}
	}
}
