/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:43:25 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/07 09:33:05 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *)malloc ((max - min) * sizeof (int));
	if (arr)
	{
		i = 0;
		while (min != max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		return (arr);
	}
	return (0);
}
