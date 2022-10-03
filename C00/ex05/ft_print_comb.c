/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:20:29 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/25 18:29:12 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char i, char z, char x)
{
	write(1, &i, 1);
	write(1, &z, 1);
	write(1, &x, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	z;
	char	x;
	char	*c;

	i = '0';
	while (i <= '7')
	{
		z = i + 1;
		while (z <= '8')
		{
			x = z + 1;
			while (x <= '9' )
			{
				c = ", ";
				ft_print(i, z, x);
				if (i != '7' || z != '8' || x != '9')
					write(1, c, 2);
				x++;
			}
			z++;
		}
		i++;
	}
}
