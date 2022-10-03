/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:07:25 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/08 09:08:56 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_check(char c, char *sep)
{
	while (*sep)
	{
		if (c == *(sep++))
			return (1);
	}
	return (0);
}

int	words_size(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !str_check(str[i], charset))
		i++;
	return (i);
}

char	*ft_bring_word(char *str, char *charset)
{
	int		word_size;
	int		i;
	char	*word;

	i = 0;
	word_size = words_size(str, charset);
	word = (char *)malloc(sizeof(char) * (word_size + 1));
	while (i < word_size)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str_check(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !str_check(str[i], charset))
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**splits;
	int		i;

	i = 0;
	splits = (char **)malloc(sizeof(char *)
			* (count_strings(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && str_check(*str, charset))
			str++;
		if (*str != '\0')
		{
			splits[i] = ft_bring_word(str, charset);
			i++;
		}
		while (*str && !str_check(*str, charset))
			str++;
	}
	splits[i] = 0;
	return (splits);
}
