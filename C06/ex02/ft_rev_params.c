/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:48:47 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/29 15:08:41 by oulusoy          ###   ########.fr       */
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
	int	c;

	c = argcount - 1;
	while (c > 0)
	{
		ft_putstr(args[c]);
		c--;
	}
}
