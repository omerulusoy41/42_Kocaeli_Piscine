/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:24:04 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/25 16:42:20 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap( int *tab, int i, int j)
{
	int	tmp;

	tmp = tab[i];
	tab [i] = tab[j];
	tab[j] = tmp;
}

void	ft_sort_int_tab( int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap (tab, j, j + 1);
			j++;
		}
		i++;
	}
}
