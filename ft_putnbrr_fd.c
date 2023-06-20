/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:18:28 by sloke             #+#    #+#             */
/*   Updated: 2023/06/20 10:42:31 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrr_fd(int n, int fd, int *count)
{
	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
		*count += 2;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
		(*count)++;
	}
	if (n > 9)
	{
		ft_putnbrr_fd(n / 10, fd, count);
		ft_putnbrr_fd(n % 10, fd, count);
	}
	else
	{
		n += '0';
		write(fd, &n, 1);
		(*count)++;
	}
}

void	ft_unsignedputnbr_fd(unsigned int n, int fd, int *count)
{
	if (n > 9)
	{
		ft_putnbrr_fd(n / 10, fd, count);
		ft_putnbrr_fd(n % 10, fd, count);
	}
	else
	{
		n += '0';
		write(fd, &n, 1);
		(*count)++;
	}
}
