/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:08:57 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/29 10:18:13 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sayi;

	sayi = 1;
	if (nb == 0 || nb == 1)
		return (sayi);
	else if (nb > 1)
	{	
		while (nb)
			sayi *= nb--;
	}
	else
	{
		return (0);
	}
	return (sayi);
}
