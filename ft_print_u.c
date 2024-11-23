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
	int	count;

	count = 0;
	if (num > 9)
		count += ft_putnbr(num / 10);
	count += ft_putchar(num % 10 + 48);
	if (count < 0)
		return (-1);
	return (count);
}
