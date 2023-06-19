/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:32:22 by sloke             #+#    #+#             */
/*   Updated: 2023/06/19 16:44:27 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int		*c;

	c = NULL;

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

	self =ft_printf("before dec: %d\n", 1235);
	theirs = printf("before dec: %d\n", 1235);
	printf("\ntotal number decimal printed: %d, %d\n", self, theirs);

	self =ft_printf("before int: %i\n", INT_MAX);
	theirs = printf("before int: %i\n", INT_MAX);
	printf("\ntotal number decimal printed: %d, %d\n", self, theirs);

	self = ft_printf("before unint %u\n", -1234);
	theirs = printf("before unint %u\n", -1234);
	printf("\ntotal number decimal printed: %d, %d\n", self, theirs);

	self =ft_printf("%%\n");
	theirs = printf("%%\n");
	printf("\ntotal number decimal printed: %d, %d\n", self, theirs);
}
