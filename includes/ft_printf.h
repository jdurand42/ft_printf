/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:15:50 by jdurand           #+#    #+#             */
/*   Updated: 2019/11/04 18:09:51 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# define USI (unsigned int)
# define HEXA "0123456789abcdef"
# define BIG_HEXA "0123456789ABCDEF"
# define FLAG_MINUS (1)
# define FLAG_WC (2)
# define FLAG_DOT (4)
# define FLAG_ZERO (8)
# define FLAG_NUMBER (16)
# define FLAG_NEG (32)
# define FLAG_STR (64)
// ".0-*"

typedef struct	s_params
{
	va_list	ap;
	size_t 	count;
	size_t 	i;
	size_t 	j;
	int		flags;
	int		width;
	int		prec;
}				t_params;

// body
int			ft_printf(char const *str, ...);
void 		do_forrest(char *s, t_params *data, char *s_flags);
void 		put_forrest(char *s, t_params *data);

//flags
void 		bilbo_flaggings(char *s_flags, t_params *data);
char 		*get_flags(char *s, t_params *data);
int			get_id(char c);
void 		flags_forrest(char *s_flags, t_params *data);
void 		parse_width(char *s_flags, t_params *data, int *i);
void 		parse_prec(char *s_flags, t_params *data, int *i);

// widt - prec
void 		do_prec_s(t_params *data, size_t *len);
void 		do_neg(t_params *data, char **s, size_t *len);
void 		print_width_s(t_params *data, size_t len);

void 		check_number(char *s, t_params *data, size_t len);
void 		print_numbers(char *s, t_params *data);
void 		print_width_n(t_params *data, char *b, size_t len);
void 		do_prec_number(t_params *data, char *s, char *b, size_t len);

// utils
int 		ft_isflag(char c);
void		ft_init_struct(t_params *data);
char		*ft_strjoin_free(char const *s1, char const *s2);
int			ft_atoi_pos(char const *str);

// printers
void 		ft_putstr_pf(char *s, t_params *data);
void 		print_char(t_params *data);
void 		print_str(t_params *data);
void 		print_void(t_params *data);
void 		print_int(t_params *data);
void 		print_usint(t_params *data);
void 		print_hexa(t_params *data);
void 		print_up_hexa(t_params *data);
void 		print_percent(t_params *data);
void 		print_random_char(t_params *data, char c);




#endif
