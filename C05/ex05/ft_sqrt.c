/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:38:12 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/05 20:34:06 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	i = 0;
	while (i <= (nb / 2))
	{
		if (i * i == nb)
			return (i);
		else if (i >= 46341)
			return (0);
		i++;
	}
	return (0);
}
