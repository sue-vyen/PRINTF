/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:56:48 by sloke             #+#    #+#             */
/*   Updated: 2023/06/14 13:42:38 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../LIBFT/libft.h"

int	ft_printf(const char *format, ...);

#endif

/*
va_start, va_arg, va_copy, va_end
^function-like macro
- used to initialise the va_list object for accessing variadic arguments in a f(X)
1) DECLARE a va_list obj that will hold the variadic arguments
2) CALL va_start, passing in the va_list obj and the last fixed arg of the f(X)
	^- init va_list obj so can access the variadic arg
3) CALL va_arg macro to access the variadic args one by one
	^- va_arg takes the va_list obj and the type of the next arg you want to retrieve
4) CALL va_end to clean up and perform any necessary cleanup operations
*/