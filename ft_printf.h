/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:13:02 by icarboni          #+#    #+#             */
/*   Updated: 2022/10/06 10:25:24 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *txt, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_putnbr(int nb);
int		ft_hexadecimal_up(unsigned	int n);
int		ft_hexadecimal_low(unsigned int n);
int		ft_uputnbr(unsigned int nb);
int		ft_putptr(void *ptr);

#endif