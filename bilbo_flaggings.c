/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bilbo_flaggings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:19:26 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/28 19:32:00 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	bilbo_flaggings(char *s_flags, t_params *data) // on les flags
{
	int id;
	int i;

	i = 0;
	data->width = -1;
	data->prec = -1;
	if (s_flags)
	{
		if (s_flags[i] && s_flags[i] == '0')
			data->flags |= (1 << 3);
		while (s_flags[i])
		{
			id = get_id(s_flags[i]);
			if (id != -1)
				data->flags |= (1 << id);
			i++;
		}
	}
	//printf("FLAGS: %d\n", data->flags);
	if (data->flags & FLAG_DOT)
		data->prec = 0;
	flags_forrest(s_flags, data);
}

int		get_id(char c)
{
	char *flags_set;
	int i;

	i = 0;
	flags_set = "-*.";
	while (flags_set[i])
	{
		if (flags_set[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void 	flags_forrest(char *s_flags, t_params *data)
{
	int i;

	i = 0;
	if (data->flags & FLAG_ZERO)
		i++;
	if (data->flags & FLAG_MINUS)
		i++;
	while (s_flags[i] != 0 && s_flags[i] != '.')
	{
		if (s_flags[i] == '*')
		{
			data->width = va_arg(data->ap, int);
			i++;
		}
		if (ft_isdigit(s_flags[i]))
		{
			data->width = ft_atoi(&s_flags[i]);
			//printf("width: %d", data->width);
			while (ft_isdigit(s_flags[i]))
				i++;
		}
	} // en principe, width geree
	if (s_flags[i] == '.')
		i++;
	while (s_flags[i] != 0 && (data->flags & FLAG_DOT))
	{
		if (s_flags[i] != 0 && s_flags[i] != '*')
		{
			data->prec = ft_atoi(&s_flags[i]);
			while (ft_isdigit(s_flags[i]))
				i++;
		}
		if (s_flags[i] != 0 && s_flags[i] == '*')
		{

			data->prec = va_arg(data->ap, int);
			i++;
		}
	}
}

/*
	i = 0;
	if (!(data->flags & FLAGS_WC))
	{
		while (s_flags[i] && s_flags[i] != '.' && ft_isdigit(s_flags[i]))
			i++;
		data->width = ft_atoi(&s_flags[i]);
	}
	else if (data->flags & FLAGS_WC)
		data->width = va_arg(data->ap, int);
	if (data->flags & FLAGS_DOT)
	{
		while (s_flags[i] != 0 && s_flags[i] != '-')
			i++;
		if (s_flags[i] && s_flags[i + 1] != '*')
			data->prec = ft_atoi(&s_flags[i]);
		else if (s_flags[i] != 0 && (flags & FLAGS_WC))
			data->prec = va_arg(data->ap, int);
	} */
