/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:28:51 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/21 13:43:59 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_specifier(char format, va_list args)
{
	int	written_chars;

	written_chars = 0;
	if (format == 's')
		written_chars += ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		written_chars += ft_putchar((char)va_arg(args, int));
	else if (format == 'd' || format == 'i')
		written_chars += ft_putnbr(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		written_chars += ft_print_hexa(format, va_arg(args, int));
	else if (format == 'p')
		written_chars += ft_print_p(va_arg(args, void *));
	else if (format == 'u')
		written_chars += ft_print_u(va_arg(args, unsigned int));
	else if (format == '%')
		written_chars += ft_putchar('%');
	else
		written_chars += ft_putchar(format);
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}
