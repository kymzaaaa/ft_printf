/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:57:13 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/25 21:42:29 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(va_list args, const char format)
{
	if (format == 'c')
		return (handle_char(args));
	else if (format == 's')
		return (handle_string(args));
	else if (format == 'p')
		return (handle_pointer(args));
	else if (format == 'd' || format == 'i')
		return (handle_decimal(args));
	else if (format == 'u')
		return (handle_unsigned(args));
	else if (format == 'x')
		return (handle_hex(args, 0));
	else if (format == 'X')
		return (handle_hex(args, 1));
	else if (format == '%')
		return (handle_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += handle_format(args, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
