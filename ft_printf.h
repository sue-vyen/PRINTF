/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sloke <sloke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:56:48 by sloke             #+#    #+#             */
/*   Updated: 2023/06/20 10:41:38 by sloke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		process_str(va_list args, const char *format, int *len);
int		check_specifier(const char *format, va_list args);
void	check_specifier2(const char *format, va_list args, int *len);
void	nb_of_digits(unsigned long nb, int *count);
char	*allocate_memory(int count);

int		ft_pointer(unsigned long nb, char *base);
int		ft_decnint(int nb);
int		ft_unsignedint(unsigned int nb);
int		ft_lowupcase(unsigned int nb, char *base);
int		ft_percent(void);

void	ft_putchar_fd(char c, int fd);
void	ft_putnbrr_fd(int n, int fd, int *count);
void	ft_unsignedputnbr_fd(unsigned int n, int fd, int *count);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *c);

#endif

/*
va_start, va_arg, va_copy, va_end
^function-like macro
- used to initialise the va_list object for accessing variadic 
arguments in a f(X)
1) DECLARE a va_list obj that will hold the variadic arguments
2) CALL va_start, passing in the va_list obj and the last fixed arg of the f(X)
	^- init va_list obj so can access the variadic arg
3) CALL va_arg macro to access the variadic args one by one
	^- va_arg takes the va_list obj and the type of the next arg 
	you want to retrieve
4) CALL va_end to clean up and perform any necessary cleanup operations
*/
