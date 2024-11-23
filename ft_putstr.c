/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:41:05 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/21 09:09:14 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	written_chars;

	written_chars = 0;
	if (str == NULL)
		return (written_chars += ft_putstr("(null)"));
	i = 0;
	while (str[i])
	{
		written_chars += ft_putchar(str[i]);
		i++;
	}
	if (written_chars < 0)
		return (-1);
	return (written_chars);
}
