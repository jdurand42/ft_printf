# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 15:23:53 by jdurand           #+#    #+#              #
#    Updated: 2019/10/22 15:33:50 by jdurand          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_printf.o

SRCS	=	$(wildcard *.c)

LIB		=	./libft/libft.a

RM		=	rm -f

CC		=	gcc -Wall -Wextra -Werror -g3 -fsanitize=address \
			$(SRCS) $(LIB)

all		:	$(NAME)

$(NAME)	:	$(CC)

clean	:
			$(RM) $(wildcard *.o)

fclean	:	clean
			$(RM) $(wildcard *.out)

re		:	fclean all

normal	:
			gcc -Wall -Wextra -Werror  $(SRCS) $(LIB)

exe		:
			./a.out

re normal :	fclean normal

.PHONY	:	clean fclean all re sani
