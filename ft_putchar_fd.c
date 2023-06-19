/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:24:53 by sloke             #+#    #+#             */
/*   Updated: 2023/06/19 15:03:10 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* write function is a system call that writes data
to a file or file descriptor
first arg: specifies the files descriptor to write to
second arg: &c -> indicating the data to be written
third arg: specifies the number of bytes written*/