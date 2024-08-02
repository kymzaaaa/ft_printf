/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:01:53 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/26 14:22:05 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_unsigned(va_list args)
{
	return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
}

int	ft_putnbr_unsigned(unsigned long n)
{
	char	buffer[20];
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n)
	{
		buffer[i++] = '0' + (n % 10);
		n /= 10;
	}
	while (i--)
		len += write(1, &buffer[i], 1);
	return (len);
}
