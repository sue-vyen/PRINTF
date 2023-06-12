/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:39:29 by sloke             #+#    #+#             */
/*   Updated: 2023/06/12 10:17:41 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *, ...)
{

}


/*
PROTOTYPE EXP (int ft_printf(const char*, ...)):
-> format = the str that contains the text to be written to stdout.
= can contain embedded format tags

FORMAT TAGS PROTOTYPE:
-> %[flags][width][.precision][length]specifier <-

RETURN VALUE:
success = total nb of chars written 
failue = a negative nb

- use the write() extensively
- write() is a f(x) of data type int that returns the number of chars printed out
- printf() prints stuff in a specified format (L/R aligned)
	^- infos are given by flags
	^- need to be stocked in a struct

1) create a struct
2) create a loop
	^- if not '%', it will keep printing
	^- if '%', there is  a variable to print
	^- once out of loop, there is the conversion fence
		^- use an if-else to choose the right conversion type
	^- then use info in struct to print the string in the correct format
3) variadic f(x)
	- functions whose total nb of elements is unknown at the beginning
	- delcare it, init it, move through it, close it
*/

