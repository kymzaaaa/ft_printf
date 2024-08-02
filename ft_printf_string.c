/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayamaza <kayamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:58:37 by kayamaza          #+#    #+#             */
/*   Updated: 2024/07/26 14:25:28 by kayamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_string(va_list args)
{
	char	*s;
	int		len;

	s = va_arg(args, char *);
	len = 0;
	if (!s)
		s = "(null)";
	while (*s)
		len += write(1, s++, 1);
	return (len);
}
