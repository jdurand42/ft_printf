/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_printers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:44:34 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/31 15:29:17 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	ft_putstr_pf(char *s, t_params *data)
{
	size_t	len;

	len = ft_strlen(s);
	if (s[0] == 0)
		len += 1;
	do_neg(data, &s, &len);
	if ((data->flags & FLAG_DOT) && (data->flags & FLAG_ZERO))
		data->flags |= (1 << 3);
	if (data->prec > -1)
		do_prec(data, &len);
	if (!(data->flags & FLAG_MINUS))
		print_width_s(data, len);
	if (data->prec != -1)
		print_prec(data, len, &s);
	write(1, s, len);
	data->count += len;
	if (data->flags & FLAG_MINUS)
		print_width_s(data, len);
}

void 	do_neg(t_params *data, char **s, size_t *len)
{
	if (!(data->flags & FLAG_NUMBER) ||
	(data->flags & FLAG_MINUS) || (!(**s == '-')))
		return ;
	if ((data->flags & FLAG_ZERO) && data->width != -1 &&
	!(data->flags & FLAG_DOT))
	{
		ft_putchar('-');
		data->count += 1;
		*s = *s + 1;
		*len -= 1;
		data->width -= 1;
	}
	else if (data->prec > 0 && data->width > 0)
	{
		*len -= 1; // sparadrad
		data->width -= 1;
	}
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
		{
			if (data->width != -1)
				data->width -= (data->prec - (int)*len);
		}
		return ;
	}
}

void 	print_prec(t_params *data, size_t len, char **s)
{
	int len_0;

	(void)s;
	len_0 = 0;
	if (!(data->flags & FLAG_NUMBER) || (int)len > data->prec)
		return ;
	if (**s == '-')
	{
		ft_putchar('-');
		*s = *s + 1;
		data->prec += 1;
	}
	len_0 = data->prec - (int)len;
	while (len_0--)
	{
		ft_putchar('0');
		data->count += 1;
	}
}

void 	print_width_s(t_params *data, size_t len)
{
	int len_width;

	if (data->width == -1 || data->width < (int)len)
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


/* if neg
->			if width et 0
				print - en premier
				print seulement &s[1];
				*len -= 1
			if width
				balec
			if prec
				print - en premier
				*len -= 1
*/
