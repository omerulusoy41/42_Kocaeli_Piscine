/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:45:04 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/13 12:15:49 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>

int	file_size(int fd, char *str)
{
	int	i;

	i = 1;
	while (read (fd, &c, 1))
		i++;
	else
		return (-1);
	return (i);
}

void	ft_puterror(char *str)
{
	write(2,"tail: ",5);
	write(2,str,ft_strlen(str));
	write(2, ": No such file or directory\n", 28);
}

void	ft_file_write(int argcount, char **args)
{
	int		fd;
	char	c;
	int 	i;
	char	*tmp;

	i = 1;
	while (i < argcount)
	{
		fd = open (str, O_RDONLY);
		if (fd != -1 && read(fd, &c, 1) != -1)
		{
			args[i] = basename(args[i]);
			tmp = (char *) malloc(file_size(fd,args[i]) + 1);
			
		}	
		else
		{
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
	if (argcount < 4)
		ft_stdin();
	else
		ft_file_write(argcount, args);
}
