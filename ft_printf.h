/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:03:20 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/30 21:27:06 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr(long n);
int	ft_putnbr_unsigned(unsigned long n);
int	ft_putnbr_hex(unsigned long n, int uppercase);
int	ft_putptr(void *ptr);
int	handle_char(va_list args);
int	handle_string(va_list args);
int	handle_pointer(va_list args);
int	handle_decimal(va_list args);
int	handle_unsigned(va_list args);
int	handle_hex(va_list args, int uppercase);
int	handle_percent(void);

#endif
