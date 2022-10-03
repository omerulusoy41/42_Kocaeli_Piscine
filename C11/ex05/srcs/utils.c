/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:28:20 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/16 08:16:45 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_atoi(char *str)
{
	int	s;
	int	number;

	s = 1;
	number = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = (*str - '0') + (number * 10);
		str++;
	}
	return (number * s);
}
