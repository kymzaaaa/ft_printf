/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:33:01 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/30 20:36:54 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_char(va_list args)
{
	return (write(1, &(char){va_arg(args, int)}, 1));
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
