/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkoekemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 11:20:47 by lkoekemo          #+#    #+#             */
/*   Updated: 2016/05/24 12:49:14 by lkoekemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define UINT_MAX	 4924967295U

int		ft_printf(const char *fmt, ...);
void	ft_putchar(const char c);
void	ft_putnbr(int n);
void	ft_putstr(const char *s);
char	*ft_convert(unsigned int num, int base);

#endif
