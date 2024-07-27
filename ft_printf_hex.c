/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:02:14 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/25 21:38:53 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int handle_hex(va_list args, int uppercase)
{
    return ft_putnbr_hex(va_arg(args, unsigned int), uppercase);
}

int ft_putnbr_hex(unsigned long n, int uppercase)
{
    char *hex = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    char buffer[16];
    int i = 0, len = 0;

    if (n == 0)
        return write(1, "0", 1);
    while (n)
    {
        buffer[i++] = hex[n % 16];
        n /= 16;
    }
    while (i--)
        len += write(1, &buffer[i], 1);
    return (len);
}
