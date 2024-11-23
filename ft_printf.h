/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:33:38 by okhourss          #+#    #+#             */
/*   Updated: 2024/11/20 13:38:38 by okhourss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_check_specifier(char format, va_list args);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_to_base_16_lowercase(unsigned int lu);
int	ft_print_hexa(char format, unsigned int x);
int	ft_to_base_16_uppercase(unsigned int x);
int	ft_print_p(void *p);
int	ft_print_u(unsigned int num);

#endif