# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 14:33:14 by jdurand           #+#    #+#              #
#    Updated: 2019/10/31 12:00:54 by jdurand          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

NAME	=	libft.a

SRCS	=	ft_atoi.c \
			ft_bzero.c ft_calloc.c \
			ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c \
			ft_itoa.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c \
			ft_memset.c	ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putstr_fd.c ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c \
			ft_tolower.c ft_toupper.c

BON		=	ft_atoi_base_bonus.c ft_base_isvalid_bonus.c \
			ft_biggerofthree_bonus.c ft_cmp_bonus.c \
			ft_exp_bonus.c ft_fibonacci_bonus.c \
			ft_find_next_prime_bonus.c ft_intlog_bonus.c \
			ft_intswap_bonus.c ft_is_prime_bonus.c \
			ft_iterative_factorial_bonus.c \
			ft_iterative_power_bonus.c \
			ft_itoa_base_bonus.c ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
			ft_lstcpy_bonus.c ft_lstdelone_bonus.c \
			ft_lstfind_bonus.c ft_lstgoto_bonus.c \
			ft_lstiter_bonus.c ft_lstlast_bonus.c \
			ft_lstmap_bonus.c ft_lstnew_bonus.c \
			ft_lstrev_bonus.c ft_lstsize_bonus.c \
			ft_memdel_bonus.c ft_memrev_bonus.c \
			ft_memswap_bonus.c ft_myatoi_bonus.c \
			ft_nbrlen_bonus.c ft_putchar_bonus.c \
			ft_putendl_bonus.c ft_putnbr_base_bonus.c \
			ft_putnbr_bonus.c ft_putstr_bonus.c \
			ft_rand_bonus.c ft_recursive_factorial_bonus.c \
			ft_recursive_power_bonus.c ft_smallerofthree_bonus.c \
			ft_sort_int_tab_bonus.c ft_sqrt_bonus.c \
			ft_strdel_bonus.c \
			ft_strndup_bonus.c \
			ft_strsplitlst_bonus.c \
			ft_strtrim_all_bonus.c ft_strcat_bonus.c \
			ft_islowercase_bonus.c ft_isuppercase_bonus.c \
			ft_striteri_bonus.c \
			ft_strncat_bonus.c ft_strncpy_bonus.c ft_strcpy_bonus.c \
			ft_charstrcmp_bonus.c ft_itoa_base_ul_bonus.c \
			ft_itoa_us_bonus.c ft_file_str_bonus.c

OBJS	=	$(SRCS:.c=.o)

BONUS	=	$(BON:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all		:	$(NAME)

$(NAME) :	$(OBJS)
			ar rc $(NAME) $(OBJS)

bonus	:	$(OBJS) $(BONUS)
			ar rc $(NAME) $(OBJS) $(BONUS)

clean	:
			$(RM) $(OBJS) $(BONUS)

fclean	:	clean
			$(RM) $(NAME)

re	:	fclean	all

.PHONY	:	clean	fclean	all	bonus
