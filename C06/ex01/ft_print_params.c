/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:48:47 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/29 15:01:21 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *p)
{
	int	i;

	i = -1;
	while (p[++i])
		write(1, &p[i], 1);
	write(1, "\n", 1);
}

int	main(int argcount, char **args)
{
	int	i;

	i = 1;
	while (i < argcount)
	{
		ft_putstr(args[i]);
		i++;
	}
}
