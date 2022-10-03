/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:30:18 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/06 11:01:15 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int num)
{
	int	number_to_write;

	if (num == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		num = 147483648;
	}
	if (num < 0)
	{
		write(1, "-", 1);
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

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}
