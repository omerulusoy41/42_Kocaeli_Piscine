/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 10:07:34 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/29 17:16:12 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}	
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *p)
{
	int	i;

	i = -1;
	while (p[++i])
		write(1, &p[i], 1);
	write(1, "\n", 1);
}

void	ft_short_params(int argcount, char **args)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argcount)
	{
		j = 1;
		while (j < argcount - 1)
		{
			if (ft_strcmp(args[j], args[j + 1]) > 0)
			{
				tmp = args[j + 1];
				args[j + 1] = args[j];
				args[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argcount, char **args)
{
	int	i;

	i = 1;
	ft_short_params(argcount, args);
	while (i < argcount)
	{
		ft_putstr(args[i]);
		i++;
	}
}
