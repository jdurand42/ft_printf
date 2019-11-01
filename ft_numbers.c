/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:07:29 by jdurand           #+#    #+#             */
/*   Updated: 2019/11/01 17:17:41 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	print_numbers(char *s, t_params *data)
{
	size_t len;
	char 	buffer[1024];

	len = ft_strlen(s);
	check_number(s, data);
	if (data->width == -1 && data->prec == -1)
	{
		write_number(s, data, (int)len);
		return ;
	}
	if (data->prec)
	{
		do_prec_number(data, s, buffer, (int)len);
		len = ft_strlen(buffer);
	}
	if (data->width > 0 && !(data->flags & FLAG_MINUS))
		print_width_n(data, &buffer, (int)len);
	write(1, buffer, ft_strlen(buffer));
	if (data->width > 0 && (data->flags & FLAG_MINUS))
		print_width_n(data, &buffer, (int)len);
}

void 	check_number(char *s, t_params *data, int len)
{
	if (len < 1)
		if (data->prec == 0 && s[0] == '0')
		{
			s[0] = 0;
			data->prec = -1;
		}
	if (s[0] = '-')
		data->flags |= 32;
	if (data->prec < len)
		data->prec = -1;
	if (data->width < len)
		data->width = -1;
}

void 	do_prec_number(t_params *data, char *s, char *b, int len)
{
	int	len_0;
	int	i;

	i = 0;
	len_0 = data->prec - len;
	if (data->flags & FLAG_NEG)
	{
		b[0] = '-';
		i++;
		s = s + 1;
	}
	else if (len > 1 && s[0] = 0 && s[1] = 'x')
	{
		b[0] = '0';
		b[1] = 'x';
		i += 2;
		s = s + 1;
	}
	while (len_0--)
		b[i++] = '0';
	while (i < len && *s && i < 1023)
		b[i++] = *s++;
	b[i] = 0;
}

void 	print_width_n(t_params *data, char **b, int len)
{
	int len_0;
	int i;

	i = 0;
	if (data->width < len)
		return ;
	len_0 = data->width - len;
	if (!(data->flags & FLAG_ZERO))
		while (len_0--)
		{
			ft_putchar(' ');
			data->count++;
		}
	else if (data->flags & FLAG_ZERO)
	{
		if (data->flags & FLAG_NEG)
		{
			ft_putchar('-');
			*b = *b + 1;
			data->count += 1;
		}
		else if (len > 1 && *b[0] == '0' && *b[1] == 'x')
		{
			ft_putstr('0x');
			*b = *b + 2;
			data->count += 2;
		}
		data->count += len_0;
		while (len_0--)
			ft_putchar('0');
	}
}
