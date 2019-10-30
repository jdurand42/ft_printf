/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:52:01 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/30 18:52:52 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	print_char(t_params *data)
{
	char c;
	char pc[2];

	c = va_arg(data->ap, int);
	pc[0] = c;
	pc[1] = 0;
	data->prec = -1;
	if (data->flags & FLAG_ZERO)
		data->flags -= 8;
	ft_putstr_pf(pc, data);
}

void 	ft_putstr_pf(char *s, t_params *data)
{
	size_t	len;


	if ((data->flags & FLAG_DOT) && (data->flags & FLAG_ZERO))
		data->flags -=8;
	len = ft_strlen(s);
	if (data->prec != -1)
		do_prec(data, &len);
	if (!(data->flags & FLAG_MINUS))
		print_width(data, &len, s);
	if (data->prec != -1)
		print_prec(data, s, len);
	write(1, s, len);
	data->count += len;
	if (data->flags & FLAG_MINUS)
		print_width(data, &len, s);
}

void 	do_prec(t_params *data, size_t *len)
{
	int len_0;

	len_0 = 0;
	if (!(data->flags & FLAG_NUMBER))
	{
		if ((int)*len > data->prec)
			*len = (int)data->prec;
		return ;
	}
	else if ((data->flags & FLAG_NUMBER))
	{
		//printf("len: %lu, %d\n", *len, data->prec);
		if ((int)*len < data->prec)
			if (data->width != -1)
				data->width -= (data->prec - (int)*len);
		//printf("width: %d, prec : %d\n", data->width, data->prec);
		return ;
	}
}

void 	print_prec(t_params *data, char *s, size_t len)
{
	int len_0;

	(void)s;
	len_0 = 0;
	if (!(data->flags & FLAG_NUMBER) || (int)len > data->prec)
		return ;
	len_0 = data->prec - (int)len;
	while (len_0--)
	{
		ft_putchar('0');
		data->count += 1;
	}
}

void 	print_width(t_params *data, size_t *len, char *s)
{
	if (data->width > (int)*len)
		print_width_s(data, *len);
	return ;
	(void)s;
}

void 	print_width_s(t_params *data, size_t len)
{
	int len_width;

	if (data->width == -1)
		return ;
	len_width = data->width - (int)len;
	while (len_width--)
	{
		if (!(data->flags & FLAG_ZERO))
			ft_putchar(' ');
		else
			ft_putchar('0');
		data->count += 1;
	}
}

void 	print_str(t_params *data)
{
	// if (!flags)
	char *s_arg;

	s_arg = va_arg(data->ap, char*);
	if (!s_arg)
	{
		write(1, "(null)", 6);
		data->count += 6;
		return ;
	}
	if (data->flags & FLAG_ZERO)
		data->flags -= 8;
	ft_putstr_pf(s_arg, data);
}

void 	print_void(t_params *data)
{
	char *s_adress;

	if (data->flags & FLAG_ZERO)
		data->flags -= 8;
	if(!(s_adress = ft_itoa_base(va_arg(data->ap, unsigned int), HEXA)))
		return ;
	data->flags |= (1 << 4);
	//ft_putstr_pf("0x", data); // Ca ca va foutre la merde
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
	/* gerer le neg
	if (s_int != NULL && s_int[0] == '-')
		*/
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
