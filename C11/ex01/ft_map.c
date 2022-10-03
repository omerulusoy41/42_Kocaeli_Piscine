/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:16:18 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/13 13:40:44 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ret;

	ret = (int *) malloc (sizeof(int) * length);
	if (ret)
	{
		i = 0;
		while (i < length)
		{
			ret[i] = (*f)(tab[i]);
			i++;
		}
		return (ret);
	}
	return (0);
}
