/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:22:51 by sloke             #+#    #+#             */
/*   Updated: 2023/06/20 10:42:47 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long nb, char *base)
{
	unsigned long	num;
	unsigned long	temp;
	int				count;
	char			*rtn;
	int				len;

	len = 0;
	num = nb;
	nb_of_digits(nb, &count);
	len = count;
	rtn = allocate_memory(count + 2);
	count = count + 2;
	rtn[count--] = '\0';
	while (count >= 0)
	{
		temp = num;
		rtn[count] = base[temp % 16];
		count--;
		num /= 16;
	}
	rtn[0] = '0';
	rtn[1] = 'x';
	ft_putstr_fd(rtn, 1);
	return (len + 2);
}
