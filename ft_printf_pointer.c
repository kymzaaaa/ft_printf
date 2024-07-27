/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:01:18 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/25 21:38:53 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int handle_pointer(va_list args)
{
    unsigned long long addr = (unsigned long long)va_arg(args, void *);
    int len = write(1, "0x", 2);

    if (addr == 0)
        return (len + write(1, "0", 1));
    char buffer[16];
    int i = 0;
    while (addr)
    {
        buffer[i++] = "0123456789abcdef"[addr % 16];
        addr /= 16;
    }
    while (i--)
        len += write(1, &buffer[i], 1);
    return (len);
}
