/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:12:37 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/05 15:31:22 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	if (src)
	{
		i = -1;
		while (src[++i])
		{
		}
		p = (char *)malloc (i);
		if (p)
		{
			p[i] = '\0';
			i--;
			while (i >= 0)
			{
				p[i] = src[i];
				i--;
			}
			return (p);
		}
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("%s",ft_strdup("OmerFAruk"));
}*/
