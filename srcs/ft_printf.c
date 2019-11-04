/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:07:17 by jdurand           #+#    #+#             */
/*   Updated: 2019/11/04 18:05:03 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	do_forrest(char *s, t_params *data, char *s_flags)
{
	bilbo_flaggings(s_flags, data);
	if (s[data->i] == 'c')
		print_char(data);
	else if (s[data->i] == 's')
		print_str(data);
	else if (s[data->i] == 'p')
		print_void(data);
	else if (s[data->i] == 'd' || s[data->i] == 'i')
		print_int(data);
	else if (s[data->i] == 'u')
		print_usint(data);
	else if (s[data->i] == 'x')
		print_hexa(data);
	else if (s[data->i] == 'X')
		print_up_hexa(data);
	else if (s[data->i] == '%')
		print_percent(data);
	else if (s[data->i] != 0)
		print_random_char(data, s[data->i]);
	if (s_flags)
	{
		free(s_flags);
		s_flags = NULL;
	}
	data->i += 1;
}

int		ft_isflag(char c)
{
	int		i;
	char	*str;

	str = "-0.*";
	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*get_flags(char *s, t_params *data)
{
	char	*s_flags;

	s_flags = NULL;
	data->i += 1;
	data->j = data->i;
	while (ft_isflag(s[data->j]) || ft_isdigit(s[data->j]) ||
	s[data->j] == ' ')
		data->j += 1;
	s_flags = ft_strndup(&s[data->i], data->j - data->i);
	data->i = data->j;
	data->flags = 0;
	return (s_flags);
}

int		ft_printf(char const *str, ...)
{
	char		*s;
	t_params	data;

	ft_init_struct(&data);
	va_start(data.ap, str);
	s = (char *)str;
	if (s[data.i] == 0)
		return (0);
	while (s[data.i])
	{
		if (s[data.i] != '%')
		{
			ft_putchar(s[(data.i)++]);
			data.count += 1;
		}
		else
			do_forrest(s, &data, get_flags(s, &data));
	}
	va_end(data.ap);
	return (data.count);
}
