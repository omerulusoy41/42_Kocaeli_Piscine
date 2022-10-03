/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 01:42:48 by oulusoy           #+#    #+#             */
/*   Updated: 2022/08/26 02:01:30 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < 'A' || str[i] > 'z' || (str[i] < 'a' && str[i] > 'Z'))
			return (0);
	return (1);
}