/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:02:53 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/07 22:55:15 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_fullsize(char **strs, int size, char *sep)
{
	int	length;
	int	i;
	int	seplen;

	length = 0;
	i = 0;
	seplen = ft_strlen(sep);
	while (i < size)
	{
		length += ft_strlen(strs[i]) + seplen;
		i++;
	}
	length -= seplen;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*konsantre;
	char	*tmp;
	int		i;

	i = 0;
	if (size == 0)
		return ((char *)malloc (sizeof(char)));
	konsantre = (char *)malloc (ft_fullsize(strs, size, sep) + 1);
	if (!konsantre)
		return (0);
	tmp = konsantre;
	while (i < size)
	{
		ft_strcpy(tmp, strs[i]);
		tmp += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(tmp, sep);
			tmp += ft_strlen(sep);
		}
		i++;
	}
	*tmp = '\0';
	return (konsantre);
}
/*
int main()
{
	char *arr[5] = {"Omer"};
	printf("%s",ft_strjoin(1,arr,"Q"));
}*/
