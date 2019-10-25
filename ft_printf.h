/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:15:50 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/25 17:48:44 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# define USI (unsigned int)
# define HEXA "0123456789abcdef"
# define BIG_HEXA "0123456789ABCDEF"

typedef struct	s_params
{
	size_t 	count;
	va_list	ap;
	size_t 	i;
	size_t 	j;
}				t_params;

// body
int			ft_printf(char const *str, ...);
char 		*get_flags(char *s, t_params *data);
void 		do_forrest(char *s, t_params *data, char *flags);

// utils
int 		ft_isflag(char c);
void		ft_init_struct(t_params *data);

// printers
void 		ft_putstr_pf(char *s, t_params *data);
void 		print_char(t_params *data, char *flags);
void 		print_str(t_params *data, char *flags);
void 		print_void(t_params *data, char *flags);
void 		print_int(t_params *data, char *flags);
void 		print_usint(t_params *data, char *flags);
void 		print_hexa(t_params *data, char *flags);
void 		print_up_hexa(t_params *data, char *flags);


#endif
