/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:38:21 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/26 11:18:01 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	artis;
	int	azalis;
	int	rev;

	artis = 0;
	azalis = size - 1;
	while (artis < (size / 2))
	{
		rev = tab[azalis];
		tab[azalis] = tab[artis];
		tab[artis] = rev;
		artis++;
		azalis--;
	}
}
