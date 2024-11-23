/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_base_16.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:51:48 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/21 09:10:33 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_lower(unsigned int x)
{
	int	written_chars;

	written_chars = 0;
	if (x >= 16)
		written_chars += ft_print_hex_lower(x / 16);
	written_chars += ft_putchar("0123456789abcdef"[x % 16]);
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}

int	ft_print_hex_upper(unsigned int x)
{
	int	written_chars;

	written_chars = 0;
	if (x >= 16)
		written_chars += ft_print_hex_upper(x / 16);
	written_chars += ft_putchar("0123456789ABCDEF"[x % 16]);
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}
