/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oulusoy <oulusoy@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:08:21 by oulusoy           #+#    #+#             */
/*   Updated: 2022/09/15 22:28:34 by oulusoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		add(int f, int s);
int		mod(int f, int s);
int		mines(int f, int s);
int		divide(int f, int s);
int		mull(int f, int s);
void	ft_putchar(char c);
#endif
