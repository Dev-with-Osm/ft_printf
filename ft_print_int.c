/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:39:58 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/21 09:09:25 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	int		written_chars;

	written_chars = 0;
	num = n;
	if (num < 0)
	{
		written_chars += ft_putchar('-');
		num = -num;
	}
	if (num > 9)
		written_chars += ft_putnbr(num / 10);
	written_chars += ft_putchar(num % 10 + 48);
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}
