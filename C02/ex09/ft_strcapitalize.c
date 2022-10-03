/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 07:23:49 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/01 01:07:06 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	check(int i, char *str)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		return (0);
	}
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		return (0);
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		return (0);
	}	
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || check(i - 1, str))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
