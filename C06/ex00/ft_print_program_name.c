/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:48:47 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/05 18:53:05 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *p)
{
	int	i;

	i = -1;
	while (p[++i])
		write(1, &p[i], 1);
}

int	main(int argcount, char **args)
{
	(void)argcount;
	ft_putstr(args[0]);
	write(1, "\n", 1);
}
