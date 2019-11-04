/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:52:01 by jdurand           #+#    #+#             */
/*   Updated: 2019/11/04 18:09:59 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_char(t_params *data)
{
	char c;
	char pc[2];

	c = va_arg(data->ap, int);
	pc[0] = c;
	pc[1] = 0;
	data->prec = -1;
	if (data->flags & FLAG_ZERO)
		data->flags ^= FLAG_ZERO;
	put_forrest(pc, data);
}

void	print_percent(t_params *data)
{
	char c;
	char pc[2];

	c = '%';
	pc[0] = c;
	pc[1] = 0;
	data->prec = -1;
	if (data->flags & FLAG_ZERO)
		data->flags ^= FLAG_ZERO;
	put_forrest(pc, data);
}

void	print_random_char(t_params *data, char c)
{
	char pc[2];

	pc[0] = c;
	pc[1] = 0;
	data->prec = -1;
	if (data->flags & FLAG_ZERO)
		data->flags ^= FLAG_ZERO;
	put_forrest(pc, data);
}

void	print_str(t_params *data)
{
	char *s_arg;

	s_arg = va_arg(data->ap, char*);
	if (!s_arg)
		s_arg = ("(null)");
	if (data->flags & FLAG_ZERO)
		data->flags ^= FLAG_ZERO;
	data->flags |= FLAG_STR;
	put_forrest(s_arg, data);
}
