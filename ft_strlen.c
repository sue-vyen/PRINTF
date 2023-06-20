/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:40:46 by sloke             #+#    #+#             */
/*   Updated: 2023/06/20 10:42:39 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *c)
{
	unsigned int	pos;

	pos = 0;
	while (c[pos])
	{
		pos++;
	}
	return (pos);
}

/*int main()
{
    const char  *v = "no you";
    printf("the string length is: %zu", ft_strlen(v));
    return (0);
}*/
