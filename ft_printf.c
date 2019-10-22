/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:07:17 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/22 20:19:53 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

#define FLAGS " .o-*"
/*
char	*get_flags

char	get_param

int 	get_preci

int 	get_width
*/

void 	do_forrest(char **s, va_list ap, char *flags)
{
	char 	type;

	//bilbo_flaggings(flags);
	if (*s == 'c')
		print_char(va_arg(ap, char), flags);
	if (*s == 's')
		print_str(va_arg(ap, char *), flags);
	if (*s == 'p')
		print_void(va_arg(ap, void *), flags);
	if (*s == 'd' || *s == 'i')
		print_int(va_arg(ap, int), flags);
	if (*s == 'u')
		print_usint(va_arg(ap, unsigned int), flags);
	if (*s == 'x')
		print_hexa(va_arg(ap, unsigned int), flags);
	if (*s == 'X')
		print_up_hexa(va_arg(ap, unsigned int), flags);
	if (*s == '%')
		ft_putchar('%');
	if (flags)
		free(flags);
	*s++; // checker comportement de printf si arg invalide
}

int 	ft_isflag(char c)
{
	if (ft_charstr(c, FLAGS))
		return (1);
	return (0);
}

char 	*get_flags(char **s)
{
	char flags;
	int i;

	i = 0; // par sur du *s[i] i = 0
	while (*s[i] != 0 && !ft_isflag(*s[i]))
		i++;
	flags = ft_stndup(*s, &*s[i] - *s); //flags == NULL si rien
	s = &*s[i];
	return (flags);
}

//cspdiuxX%
int		ft_printf(char const *str, ..)
{
	va_list ap;
	int		count;
	char	*s;

	s = (char *)str;
	i = 0;
	//init_f_tab(ftab);
	va_start(ap, str);
	while (*s)
	{
		if (*s != '%')
		{
			ft_putchar(*s++);
			count++;
		}
		else
			do_forrest(&s, ap, get_flags(&++s));
	}
}
