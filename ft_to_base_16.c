/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_base_16.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:51:48 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/20 09:51:22 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_to_base_16_lowercase(unsigned int x)
{
	int	count;

	count = 0;
	if (x >= 16)
		count += ft_to_base_16_lowercase(x / 16);
	count += ft_putchar("0123456789abcdef"[x % 16]);
	if (count < 0)
		return (-1);
	return (count);
}

int	ft_to_base_16_uppercase(unsigned int x)
{
	int	count;

	count = 0;
	if (x >= 16)
		count += ft_to_base_16_uppercase(x / 16);
	count += ft_putchar("0123456789ABCDEF"[x % 16]);
	if (count < 0)
		return (-1);
	return (count);
}
