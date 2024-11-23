/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:30:58 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/22 08:25:11 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		written_chars;

	written_chars = 0;
	i = 0;
	if (str == NULL)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			written_chars += ft_check_specifier(str[i], args);
		}
		else
			written_chars += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}
