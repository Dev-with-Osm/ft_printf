/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:03:55 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/19 20:03:55 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_to_hex(unsigned long x)
{
	int	written_chars;

	written_chars = 0;
	if (x >= 16)
		written_chars += convert_to_hex(x / 16);
	written_chars += ft_putchar("0123456789abcdef"[x % 16]);
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}

int	ft_print_p(void *p)
{
	unsigned long	ads;
	int				written_chars;

	written_chars = 0;
	ads = (unsigned long) p;
	written_chars += ft_putstr("0x");
	written_chars += convert_to_hex(ads);
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}
