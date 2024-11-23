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

static int	to_base_16(unsigned long x)
{
	int	count;

	count = 0;
	if (x >= 16)
		count += to_base_16(x / 16);
	count += ft_putchar("0123456789abcdef"[x % 16]);
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_print_p(void *p)
{
	unsigned long	ads;
	int				count;

	count = 0;
	ads = (unsigned long) p;
	count += ft_putstr("0x");
	count += to_base_16(ads);
	if (count < 0)
		return (-1);
	return (count);
}
