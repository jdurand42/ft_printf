/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:52:01 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/25 17:49:41 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	print_char(t_params *data, char *flags)
{
	// if (flags)
	(void)flags;
	ft_putchar(va_arg(data->ap, int));
	data->count += 1;
}

void 	ft_putstr_pf(char *s, t_params *data)
{
		//(void)flags;
		while (*s)
		{
			ft_putchar(*s++);
			data->count += 1;
		}
}

void 	print_str(t_params *data, char *flags)
{
	// if (!flags)
	char *s_arg;

	(void)flags;
	s_arg = va_arg(data->ap, char*);
	if (!s_arg)
		return ;
	ft_putstr_pf(s_arg, data);
}

void 	print_void(t_params *data, char *flags)
{
	char *s_adress;

	(void)flags;
	if(!(s_adress = ft_itoa_base(va_arg(data->ap, unsigned int), HEXA)))
		return ;
	ft_putstr_pf("0x", data);
	ft_putstr_pf(s_adress, data);
	free(s_adress);
	s_adress = NULL;
}

void 	print_int(t_params *data, char *flags)
{
	char *s_int;

	// if (!flags)
	(void)flags;
	if (!(s_int = ft_itoa(va_arg(data->ap, int))))
		return ;
	ft_putstr_pf(s_int, data);
	free(s_int);
	s_int = NULL;
}

void 	print_usint(t_params *data, char *flags)
{
	char *s_usint;

	// if (!flags)
	(void)flags;
	if (!(s_usint = ft_itoa(va_arg(data->ap, unsigned int))))
		return ;
	ft_putstr_pf(s_usint, data);
	free(s_usint);
	s_usint = NULL;
}

void 	print_hexa(t_params *data, char *flags)
{
	char *s_hexa;

	//if (!flags)
	(void)flags;
	if (!(s_hexa = ft_itoa_base(va_arg(data->ap, unsigned int), HEXA)))
		return ;
	ft_putstr_pf(s_hexa, data);
	free(s_hexa);
	s_hexa = NULL;
}

void 	print_up_hexa(t_params *data, char *flags)
{
	char *s_bighexa;

	//if (!flags)
	(void)flags;
	if (!(s_bighexa = ft_itoa_base(va_arg(data->ap, unsigned int), BIG_HEXA)))
		return ;
	ft_putstr_pf(s_bighexa, data);
	free(s_bighexa);
	s_bighexa = NULL;
}
