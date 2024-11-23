/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:41:05 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/20 10:06:02 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	count = 0;
	if (str == NULL)
		return (count += ft_putstr("(null)"));
	i = 0;
	while (str[i])
	{
		count += ft_putchar(str[i]);
		i++;
	}
	if (count < 0)
		return (-1);
	return (count);
}
