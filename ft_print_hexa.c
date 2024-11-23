/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:03:28 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/20 09:50:30 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(char format, unsigned int x)
{
	int	count;

	count = 0;
	if (format == 'x')
		count += ft_to_base_16_lowercase(x);
	else if (format == 'X')
		count += ft_to_base_16_uppercase(x);
	if (count < 0)
		return (-1);
	return (count);
}
