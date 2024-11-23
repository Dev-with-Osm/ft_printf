/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:22:07 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/19 20:22:07 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int num)
{
	int	written_chars;

	written_chars = 0;
	if (num > 9)
		written_chars += ft_putnbr(num / 10);
	written_chars += ft_putchar(num % 10 + 48);
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}
