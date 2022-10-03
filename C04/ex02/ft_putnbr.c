/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:34:06 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/29 18:31:03 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	int	number_to_write;

	if (num == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
		ft_putnbr(num);
	}
	else
	{
		if (num > 9)
		{
			ft_putnbr(num / 10);
		}
		number_to_write = num % 10 + 48;
		write(1, &number_to_write, 1);
	}
}
