/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:53:00 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/26 13:19:13 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	while (dest[i])
		i++;
	x = 0;
	while (src[x] && x < nb)
	{
		dest[x + i] = src[x];
		x++;
	}
	dest[x + i] = '\0';
	return (dest);
}
