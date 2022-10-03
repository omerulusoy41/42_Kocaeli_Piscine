/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:17:45 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/14 11:37:26 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>

int ft_strlen(char *str)
{
	int	i;

	i= 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_file_write(int argcount, char **args)
{
	int		fd;
	char	c;
	int 	i;

	i = 1;
	while (i < argcount)
	{
		args[i] = basename(args[i]);
		fd = open (args[i], O_RDONLY);
		if (fd != -1 && read(fd, &c, 1) != -1)
		{
			write (1, &c, 1);
			while (read (fd, &c, 1))
				write (1, &c, 1);
		}
		else
		{
			write(2,"cat: ",5);
			write(2,args[i],ft_strlen(args[i]));
			write(2, ": No such file or directory\n", 28);
		}
		i++;
	}
}

void	ft_stdin()
{
	char	c;

	while (read(0,&c,1) != 0)
		write (1, &c, 1);
}

int main(int argcount, char **args)
{
	if (argcount == 1)
		ft_stdin();
	else
		ft_file_write(argcount,args);
	write (1,"AAA",3);
	return (0);
}
