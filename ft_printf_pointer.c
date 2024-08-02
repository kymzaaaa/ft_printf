/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:01:18 by kayamaza          #+#    #+#             */
/*   Updated: 2024/08/02 15:39:02 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_pointer(va_list args)
{
	unsigned long long	addr;
	int					len;
	int					i;
	char				buffer[16];

	addr = (unsigned long long)va_arg(args, void *);
	len = write(1, "0x", 2);
	if (addr == 0)
		return (len + write(1, "0", 1));
	i = 0;
	while (addr)
	{
		buffer[i++] = "0123456789abcdef"[addr % 16];
		addr /= 16;
	}
	while (i--)
		len += write(1, &buffer[i], 1);
	return (len);
}
