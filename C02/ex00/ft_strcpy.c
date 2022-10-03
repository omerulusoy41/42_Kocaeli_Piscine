/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:20:48 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/29 17:24:18 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy( char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
	{
		dest[i] = src [i];
	}
	dest[i] = '\0';
	return (dest);
}