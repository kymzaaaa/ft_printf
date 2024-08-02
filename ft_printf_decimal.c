/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:01:39 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/30 20:36:29 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_decimal(va_list args)
{
	return (ft_putnbr(va_arg(args, int)));
}

int	ft_putnbr(long n)
{
	char	buffer[20];
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
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
