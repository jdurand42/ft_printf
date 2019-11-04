# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019\06/24 18:35:31 by jdurand           #+#    #+#              #
#    Updated: 2019/10/13 20:17:57 by jdurand          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	./srcs/ft_printf.c ./srcs/ft_print_types.c \
			./srcs/ft_print_types2.c \
			./srcs/ft_bilbo_flaggings.c ./srcs/ft_strings_printers.c \
			./srcs/ft_numbers.c ./srcs/ft_initialisations.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

LIB		=	./libft/ft_atoi.o ./libft/ft_isdigit.o ./libft/ft_itoa.o \
			./libft/ft_itoa_base_bonus.o ./libft/ft_itoa_base_ul_bonus.o \
			./libft/ft_itoa_us_bonus.o ./libft/ft_putchar_bonus.o \
			./libft/ft_strcat_bonus.o ./libft/ft_strcpy_bonus.o \
			./libft/ft_strdup.o ./libft/ft_strlen.o \
			./libft/ft_strndup_bonus.o

all		:	$(NAME)

$(NAME) :	$(OBJS)
			cd ./libft/ ; make bonus ; cd .. ;
			ar rc $(NAME) $(OBJS) $(LIB)

clean	:
			cd ./libft/ ; make clean ; cd .. ;
			$(RM) $(OBJS) $(BONUS)

fclean	:	clean
			cd ./libft/ ; make fclean ; cd .. ;
			$(RM) $(NAME)

re	:	fclean	all

.PHONY	:	clean	fclean	all
