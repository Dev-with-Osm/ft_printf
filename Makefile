# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okhourss <okhourss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 20:27:27 by okhourss          #+#    #+#              #
#    Updated: 2024/11/19 20:27:27 by okhourss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

AR = ar rcs

RM = rm -f

SRCS = ft_check_type.c ft_print_hexa.c ft_print_int.c ft_print_p.c \
		ft_print_u.c ft_printf.c ft_putchar.c ft_putstr.c ft_to_base_16.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
			ar rcs ${NAME} ${OBJS}

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:  
		${RM} ${OBJS}

fclean:	clean
			${RM} ${NAME}

re:	fclean all