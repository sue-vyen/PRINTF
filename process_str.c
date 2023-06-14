/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:40:09 by sloke             #+#    #+#             */
/*   Updated: 2023/06/14 15:38:01 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

int	process_str(va_list args, const char *format)
{
	int	len;

	len = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format++, 1);
			len++;
		}
		else
		{
			check_specifier(*format + 1, args);
			
		}
	}
}

void	check_specifier(const char *format, va_list args)
{
	if (*format == 'c')
		ft_putchar_fd(va_arg(args, char), 1);
}