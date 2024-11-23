/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:28:51 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/23 20:59:15 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_specifier(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		count += ft_putchar((char)va_arg(args, int));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		count += ft_print_hexa(format, va_arg(args, int));
	else if (format == 'p')
		count += ft_print_p(va_arg(args, void *));
	else if (format == 'u')
		count += ft_print_u(va_arg(args, unsigned int));
	else if (format == '%')
		count += ft_putchar('%');
	else
		ft_putchar(format);
	if (count < 0)
		return (-1);
	return (count);
}
