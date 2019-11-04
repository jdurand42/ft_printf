/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:52:01 by jdurand           #+#    #+#             */
/*   Updated: 2019/11/04 12:55:55 by jdurand          ###   ########.fr       */
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
		data->flags |= (1 << 3);
	put_forrest(pc, data);
}

void 	print_percent(t_params *data)
{
	char c;
	char pc[2];

	c = '%';
	pc[0] = c;
	pc[1] = 0;
	data->prec = -1;
	if (data->flags & FLAG_ZERO)
		data->flags |= (1 << 3);
	put_forrest(pc, data);
}

void 	print_random_char(t_params *data, char c)
{
	char pc[2];

	pc[0] = c;
	pc[1] = 0;
	data->prec = -1;
	if (data->flags & FLAG_ZERO)
		data->flags |= (1 << 3);
	put_forrest(pc, data);
}

void 	print_str(t_params *data)
{
	// if (!flags)
	char *s_arg;

	s_arg = va_arg(data->ap, char*);
	if (!s_arg)
		s_arg = ("(null)");
	if (data->flags & FLAG_ZERO)
		data->flags |= (1 << 3);
	put_forrest(s_arg, data);
}

void 	print_void(t_params *data)
{
	char			*s_adress;
	unsigned long	ad_arg;

	if (data->flags & FLAG_ZERO)
		data->flags |= (1 << 3);
	ad_arg = va_arg(data->ap, unsigned long);
	if (ad_arg == 0 && data->prec == 0)
	{
		if (!(s_adress = ft_strdup("")))
			return ;
	}
	else if (!(s_adress = ft_itoa_base_ul(ad_arg, HEXA)))
		return ;
	data->flags |= (1 << 4);
	//s_adress = ft_strjoin_free("0x", s_adress);
	put_forrest(s_adress, data);
	free(s_adress);
	s_adress = NULL;
}

void 	print_int(t_params *data)
{
	char	*s_int;
	int		i_arg;

	i_arg = va_arg(data->ap, int);
	if (i_arg == 0 && (data->prec == 0))
	{
		if (!(s_int = ft_strdup("")))
			return ;
	}
	else if (!(s_int = ft_itoa(i_arg)))
		return ;
	data->flags |= (1 << 4);
	put_forrest(s_int, data);
	free(s_int);
	s_int = NULL;
}

void 	print_usint(t_params *data)
{
	char 			*s_usint;
	unsigned int	u_arg;

	u_arg = va_arg(data->ap, unsigned int);
	if (u_arg == 0 && data->prec == 0)
	{
		if (!(s_usint = ft_strdup("")))
			return ;
	}
	else if (!(s_usint = ft_itoa_us(u_arg)))
		return ;
	data->flags |= (1 << 4);
	put_forrest(s_usint, data);
	free(s_usint);
	s_usint = NULL;
}

void 	print_hexa(t_params *data)
{
	char			*s_hexa;
	unsigned int	x_arg;

	x_arg = va_arg(data->ap, unsigned int);
	if (x_arg == 0 && data->prec == 0)
	{
		if (!(s_hexa = ft_strdup("")))
			return ;
	}
	else if (!(s_hexa = ft_itoa_base(x_arg, HEXA)))
		return ;
	data->flags |= (1 << 4);
	put_forrest(s_hexa, data);
	free(s_hexa);
	s_hexa = NULL;
}

void 	print_up_hexa(t_params *data)
{
	char			*s_bighexa;
	unsigned int	upx_arg;

	upx_arg = va_arg(data->ap, unsigned int);
	if (upx_arg == 0 && data->prec == 0)
		if (!(s_bighexa = ft_strdup("")))
			return ;
	if (!(s_bighexa = ft_itoa_base(upx_arg, BIG_HEXA)))
		return ;
	data->flags |= (1 << 4);
	put_forrest(s_bighexa, data);
	free(s_bighexa);
	s_bighexa = NULL;
}
