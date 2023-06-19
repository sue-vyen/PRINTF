/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:32:22 by sloke             #+#    #+#             */
/*   Updated: 2023/06/19 16:24:49 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int		*c;

	c = NULL;

	// printf("length: %d", ft_printf("hello world\n"));
	// printf("length: %d", ft_printf("before char: %c\n", 'A'));
	int self = 0;
	int theirs = 0;
	self = ft_printf("before lowercase: %x\n", 25066);
	theirs = printf("before lowercase: %x\n", 25066);
	printf("\ntotal number lowercase printed: %d, %d\n", self, theirs);

	self = ft_printf("before string: %s\n", "hello world");
	theirs = printf("before string: %s\n", "hello world");
	printf("\ntotal number printed: %d, %d\n", self, theirs);

	self =ft_printf("before uppercase: %X\n", 25066);
	theirs = printf("before uppercase: %X\n", 25066);
	printf("\ntotal number uppercase printed: %d, %d\n", self, theirs);


	// ft_printf("before uppercase: %X\n", 25066);
	// ft_printf("before pointer: %p\n", &c);
	// ft_printf("before dec: %d\n", 1235);
	// ft_printf("before int: %i\n", INT_MAX);
	// ft_printf("before unint %u\n", 1234);
	// ft_printf("%%\n");
	// ft_printf("hi");
	// ft_printf("%s", "Hello world");
}
