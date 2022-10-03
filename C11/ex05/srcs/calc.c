/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:46:36 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/13 15:17:21 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	add(int f, int s)
{
	return (f + s);
}

int	mines(int f, int s)
{
	return (f - s);
}

int	mull(int f, int s)
{
	return (f * s);
}

int	divide(int f, int s)
{
	if (s == 0)
		return (-1);
	return (f / s);
}

int	mod(int f, int s)
{
	if (s == 0)
		return (-1);
	return (f % s);
}
