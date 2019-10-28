/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:52:01 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/28 19:15:06 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	print_char(t_params *data)
{
	// if (flags)
	ft_putchar(va_arg(data->ap, int));
	data->count += 1;
}

void 	ft_putstr_pf(char *s, t_params *data)
{
		//;
		size_t len;

		len = ft_strlen(s);
//		printf("flags :%d\n", data->flags);
//		printf("prec: %d\n", data->prec);
		if ((data->flags & FLAG_DOT) && data->prec != -1)
			if ((size_t)data->prec < len)
				len = (size_t)data->prec;
		if (!(data->flags & FLAG_MINUS))
			print_width(data, len);
		if (data->flags & FLAG_NUMBER)
			print_prec_nb(data, len);
		write(1, s, len);
		data->count += len;
		if ((data->flags & FLAG_MINUS) && !(data->flags & FLAG_NUMBER))
			print_width(data, len);
}

void 	print_str(t_params *data)
{
	// if (!flags)
	char *s_arg;


	s_arg = va_arg(data->ap, char*);
	if (!s_arg)
		return ;
	ft_putstr_pf(s_arg, data);
}

void 	print_void(t_params *data)
{
	char *s_adress;


	if(!(s_adress = ft_itoa_base(va_arg(data->ap, unsigned int), HEXA)))
		return ;
	data->flags |= (1 << 4);
	ft_putstr_pf("0x", data);
	ft_putstr_pf(s_adress, data);
	free(s_adress);
	s_adress = NULL;
}

void 	print_int(t_params *data)
{
	char *s_int;

	// if (!flags)

	if (!(s_int = ft_itoa(va_arg(data->ap, int))))
		return ;
	data->flags |= (1 << 4);
	ft_putstr_pf(s_int, data);
	free(s_int);
	s_int = NULL;
}

void 	print_usint(t_params *data)
{
	char *s_usint;

	// if (!flags)
	if (!(s_usint = ft_itoa(va_arg(data->ap, unsigned int))))
		return ;
	data->flags |= (1 << 4);
	ft_putstr_pf(s_usint, data);
	free(s_usint);
	s_usint = NULL;
}

void 	print_hexa(t_params *data)
{
	char *s_hexa;

	//if (!flags)
	if (!(s_hexa = ft_itoa_base(va_arg(data->ap, unsigned int), HEXA)))
		return ;
	data->flags |= (1 << 4);
	ft_putstr_pf(s_hexa, data);
	free(s_hexa);
	s_hexa = NULL;
}

void 	print_up_hexa(t_params *data)
{
	char *s_bighexa;

	//if (!flags)
	if (!(s_bighexa = ft_itoa_base(va_arg(data->ap, unsigned int), BIG_HEXA)))
		return ;
	data->flags |= (1 << 4);
	ft_putstr_pf(s_bighexa, data);
	free(s_bighexa);
	s_bighexa = NULL;
}

void 	print_width(t_params *data, size_t len)
{
	if (data->width == -1)
		return ;
	while ((int)len < data->width)
	{
		if (data->flags & FLAG_ZERO)
			ft_putchar('0');
		else if (!(data->flags & FLAG_ZERO))
			ft_putchar(' ');
		data->count += 1;
		len++;
	}
}

void 	print_prec_nb(t_params *data, size_t len)
{
	while ((int)len < data->prec)
	{
		ft_putchar('0');
		len++;
		if (data->width == -1)
			data->count += 1;
	}
}
