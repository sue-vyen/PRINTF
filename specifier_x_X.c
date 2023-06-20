/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_x_X.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:21:15 by sloke             #+#    #+#             */
/*   Updated: 2023/06/20 16:24:36 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	nb_of_digits(unsigned long nb, int *count)
{
	*count = 0;
	if (nb == 0)
		*count = 1;
	while (nb > 0)
	{
		nb /= 16;
		++(*count);
	}
}

char	*allocate_memory(int count)
{
	char	*rtn;

	rtn = malloc(sizeof(char) * (count + 1));
	if (!rtn)
		return (NULL);
	return (rtn);
}

int	ft_lowupcase(unsigned long nb, char *base)
{
	int				count;
	unsigned long	num;
	char			*rtn;
	unsigned long	temp;
	int				len;

	len = 0;
	num = nb;
	nb_of_digits(nb, &count);
	len = count;
	rtn = allocate_memory(count);
	rtn[count--] = '\0';
	while (count >= 0)
	{
		temp = num;
		rtn[count] = base[temp % 16];
		count--;
		num /= 16;
	}
	ft_putstr_fd(rtn, 1);
	free(rtn);
	return (len);
}
