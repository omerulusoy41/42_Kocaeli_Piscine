#include<stdio.h> 
#include<unistd.h> 
#include<fcntl.h> 
#include<stdlib.h>

int arg_check(int argcount)
{
	return (argcount == 1 ? 0 : 1);
}

int	ft_file_size(char *str)
{
	int		fd;
	int		i;
	char	c;
	
	i = 0;	
	fd = open(str,O_RDONLY);	
	if (fd != -1 && read(fd, &c, 1) != -1)
	{
			i++;
			while (read (fd, &c, 1))
				i++;
	}
	close(fd);
	return (i);
}

typedef struct	tmp_map
{
	int		nb;
	char	free;
	char	obstacle;
	char	sqr;

	nb = 0;
};

tmp_map	f_line_check (char *file)
{
	int	i;
	int fd;
	char	tmp[1024];
	tmp_map = map;

	fd = open(file,O_RDONLY);
	i = 0;
	if (fd != -1 && read(fd, &c, 1) != -1)
	{
		while (read (3, &c, 1))
		{
			if (c != '\n')
				tmp[i] = c;
			else
				break;
			i++;
		}
	}
	close(fd);
	map.nb = ft_atoi(tmp);
	while (tmp[i] >= '0' && tmp[i] <= '9')
		i++;
	map.free= tmp[i];
	map.obstacle=tmp[++i];
	map.sqr = tmp[++i];
	if(tmp[i] != '\n')
		map.nb = 0;
}

int char_check()
{

	return (c != map.free || c != map.obstacle || c != map.sqr);
}

int	ft_map_check(char *str)
{
	tmp_map map;
	int	i;
	count = 0;
	i = 0;
	map = f_line_check(str);
	if (open(str,O_RDONLY) != -1 && read(fd, &c, 1) != -1 && map.nb != 0)
	{
		while (read (3, &c, 1))
		{
			index = 0;
			if (c == '\n')
				count ++;
			if (c != '\n')
				index++;
			if(map.nb != index)
				return (0);
			if(count != 0)
				if (!char_check(c,map))
					return 0;
			i++;
		}
	}
	if(count != map.nb)
		return(0);
	return(1);
}

void	ft_arr_fill(int	argcount, char **args)
{
	int		i;
	int		fd;
	char	**map;

	i = 1;
	while (i < argcount)
	{
		if (!map_check(args[i]))
		{
			write (2,"map error\n",10);
			i++;
			continue;
		}
		map = (char **)malloc(sizeof(char *) * ft_count_words(args[i]));
		

		
	}
}

char *ft_stdin()
{
	char	c[1024];
    int i=0;

	i = 0;
	while (read(0,&(c[i]),1) != 0)
	    i++;
	return (c);
}

int main(int argcount, char **args)
{
	
	if (!arg_check(argcount))
		ft_arr_fill(2,ft_stdin());
	else
		ft_arr_fill(argcount,args);
	
}
