/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:33:16 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/16 08:25:05 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	op_kont(char c)
{
	return (c == '-' || c == '+' || c == '/' || c == '%' || c == '*');
}

char	ft_bring_oper(char *str)
{
	if (str[0] == '\0' || str[1] != '\0')
		return (0);
	if (!op_kont(str[0]))
		return (0);
	return (str[0]);
}

void	ft_oper(int f, char o, int s)
{
	if (o == '+')
		ft_putnbr(add(f, s));
	else if (o == '-')
		ft_putnbr(mines(f, s));
	else if (o == '*')
		ft_putnbr(mull(f, s));
	else if (o == '/')
	{
		if (divide(f, s) == -1)
		{
			write (1, "Stop : division by zero\n", 24);
			return ;
		}
		ft_putnbr(divide(f, s));
	}
	else if (o == '%')
	{
		if (mod(f, s) == -1)
		{
			write (1, "Stop : modulo by zero\n", 22);
			return ;
		}
		ft_putnbr(mod(f, s));
	}
	write(1, "\n", 1);
}

int	main(int argcount, char **args)
{
	int		first;
	int		second;
	char	c;

	if (argcount == 4)
	{
		first = ft_atoi(args[1]);
		second = ft_atoi(args[3]);
		c = ft_bring_oper(args[2]);
		if (c != 0)
			ft_oper(first, c, second);
		else
		{
			ft_putnbr(0);
			write(1, "\n", 1);
		}
	}
}
