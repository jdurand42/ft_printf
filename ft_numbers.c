/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:07:29 by jdurand           #+#    #+#             */
/*   Updated: 2019/11/04 11:58:09 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	print_numbers(char *s, t_params *data)
{
	size_t len;
	char 	buffer[1024];

	len = ft_strlen(s);
	check_number(s, data, len);
	buffer[0] = 0;
	ft_strcat(buffer, s);
	if (data->width == -1 && data->prec == -1)
	{
		write(1, s, len);
		data->count += len;
		return ;
	}
	if (data->prec >= 0)
		do_prec_number(data, s, buffer, (int)len);
	len = ft_strlen(buffer);
	if (data->width > 0 && !(data->flags & FLAG_MINUS))
		print_width_n(data, buffer, (int)len);
	len = ft_strlen(buffer);
	write(1, buffer, len);
	data->count += len;
	if (data->width > 0 && (data->flags & FLAG_MINUS))
		print_width_n(data, buffer, (int)len);
}

void 	check_number(char *s, t_params *data, size_t len)
{
	if (s[0] == '-')
		data->flags |= 32;
	if (data->prec < (int)len)
		data->prec = -1;
	if (data->width < (int)len)
		data->width = -1;
}

void 	do_prec_number(t_params *data, char *s, char *b, size_t len)
{
	int	len_0;
	int	i;
	char buffer[1024];

	i = 0;
	len_0 = 0;
	if (data->prec != -1)
		len_0 = data->prec - (int)len;
	if (data->flags & FLAG_NEG)
	{
		buffer[0] = '-';
		i++;
		s = s + 1;
		len_0 += 1;
	}
	if (data->prec >= 0)
	{
		while (len_0--)
		{
			buffer[i] = '0';
			i++;
		}
	}
	buffer[i] = 0;
	ft_strcpy(b, ft_strcat(buffer, s));
}

void 	print_width_n(t_params *data, char *b, size_t len)
{
	int len_0;
	int i;

	i = 0;
	if (data->width < (int)len)
		return ;
	len_0 = data->width - (int)len;
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
			b = ft_strcpy(b, &b[1]);
			//printf("buffer: %s\n", b);
			data->count += 1;
		}
		/*else if (!(data->flags & FLAG_MINUS) && len > 1 && b[0] == '0' && b[1] == 'x')
		{
			ft_putstr("0x");
			b = ft_strcpy(b, &b[2]);
			data->count += 2;
		}*/
		data->count += len_0;
		while (len_0--)
			ft_putchar('0');
	}
}
