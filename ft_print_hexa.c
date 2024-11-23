/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:03:28 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/21 09:10:46 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(char format, unsigned int x)
{
	int	written_chars;

	written_chars = 0;
	if (format == 'x')
		written_chars += ft_print_hex_lower(x);
	else if (format == 'X')
		written_chars += ft_print_hex_upper(x);
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}
