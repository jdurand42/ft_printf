/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialisations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:21:53 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/24 16:49:14 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_params	*ft_init_struct(t_params *data, va_list *ap)
{
	//va_list	*ap;

	if (!(data = (t_params*)malloc(1 * sizeof(t_params))))
		return (NULL);
	data->count = 0;
	data->ap = ap;
	data->i = 0;
	data->j = 0;
	return (data);
}
