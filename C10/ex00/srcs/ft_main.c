/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:22:05 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/12 12:41:02 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h> 

void	ft_putstr(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		write(1, &arr[i], 1);
		i++;
	}
}

int	ft_args_check(int argcount)
{
	if (argcount > 2)
	{
		ft_putstr("Too many arguments.");
		write (1, "\n", 1);
		return (0);
	}
	else if (argcount < 2)
	{
		ft_putstr("File name missing.");
		write (1, "\n", 1);
		return (0);
	}
	return (1);
}

int	ft_file_write(char **args)
{
	int		fd;
	char	c;

	fd = open (args[1], O_RDONLY);
	if (fd != -1)
	{
		while (read (fd, &c, 1))
			write (1, &c, 1);
	}
	else
		return (0);
	return (1);
}

int	main(int argcount, char **args)
{
	if (!ft_args_check (argcount))
		return (0);
	if (!ft_file_write(args))
	{
		ft_putstr("Cannot read file.");
		write (1, "\n", 1);
	}
	return (0);
}
