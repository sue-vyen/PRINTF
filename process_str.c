/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:40:09 by sloke             #+#    #+#             */
/*   Updated: 2023/06/19 16:30:38 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	check_specifier2(const char *format, va_list args, int *len)
{

	if (*format == 'p')
		*len += ft_pointer(va_arg(args, unsigned long), "0123456789abcdef");
	if (*format == 'd' || *format == 'i')
		ft_putnbrr_fd(va_arg(args, int), 1, len);
	if (*format == 'u')
		ft_unsignedputnbr_fd(va_arg(args, unsigned int), 1, len);
	if (*format == 'x')
		*len += ft_lowupcase(va_arg(args, unsigned int), "0123456789abcdef");
	if (*format == 'X')
		*len += ft_lowupcase(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (*format == '%')
		*len += write(1, "%", 1);
	// return (*len);
}

int	check_specifier(const char *format, va_list args)
{
	int		len;
	char	*str;

	len = 0;
	if (*format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		(len)++;
	}
	if (*format == 's')
	{
		str = va_arg(args, char *);
		ft_putstr_fd(str, 1);
		(len) = ft_strlen(str);
	}
	return (len);
}

int	process_str(va_list args, const char *format, int *len)
{
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format++, 1);
			(*len)++;
		}
		else if (*(format + 1) == 'c' || *(format + 1) == 's')
		{
			(*len) += check_specifier(format + 1, args);
			format += 2;
		}
		else
		{
			check_specifier2(format + 1, args, len);
			format += 2;
		}
	}
	return (*len);
}
