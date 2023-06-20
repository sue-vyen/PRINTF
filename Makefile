# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sloke <sloke@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 12:02:55 by sloke             #+#    #+#              #
#    Updated: 2023/06/20 16:59:50 by sloke            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar_fd.c ft_putnbrr_fd.c ft_putstr_fd.c ft_strlen.c \
		specifier_p.c specifier_x_X.c process_str.c\

OBJS = $(SRCS:.c=.o)
# obj files generated from the source files
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	ranlib $(NAME)
# 1st: specifies the target $(NAME); lists its dependencies as $(OBJS)
# 		^- reps the obj file required to build the library
# 2nd: line changes the directory to the libft dir; execute $(MAKE) to run the mkfle in the libft dir
# 3rd: creates a library archive generated from libft library + combines the .o files listed in 
# $(OBJS) and then adds them to the library archive specificed by $(NAME); 
# -rcs -> used to create the archive (r), allow replacement of existing files (c), create and index (s);
# 4th: generates an index for the library; index improves the performance of library access by providing quick symbol lookup
all: $(NAME)

clean:
	rm -f $(OBJS)
# rule for cleaning the obj files and intermediate files
# changes directory to libft and execute the make clean command to clean the .o files
# remove the .o files generated from the src files $(OBJS)
fclean : clean
	rm -f $(NAME)
# " as clean, remove the library file $(NAME)
re: fclean all
# rebooting basically -> restarting
.PHONY: all clean fclean re
# used to declare the phony targets to esure they are always considered targets
# and not file names

# m:
# 	@cc -Wall -Werror -Wextra ft_printf.c mainprintf.c process_str.c specifier_x_X.c ft_strlen.c ft_putstr_fd.c ft_putchar_fd.c specifier_p.c ft_putnbrr_fd.c
# 	@./a.out 