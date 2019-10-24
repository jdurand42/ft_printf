/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:07:17 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/24 20:25:53 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define FLAGS ".0-*"
/*
char	*get_flags

char	get_param

int 	get_preci

int 	get_width
*/
//void 	(*f)()[6];



void 	do_forrest(char *s, t_params *data, char *flags)
{
	// if ((id = get_id(*format, "cspduxX%")))
	// 	f[id](data, flags);
	//bilbo_flaggings(flags);
	if (s[data->i] == 'c')
		print_char(data, flags);
	if (s[data->i] == 's')
		print_str(data, flags);
	if (s[data->i] == 'p')
		print_void(data, flags);
	if (s[data->i] == 'd' || *s == 'i')
		print_int(data, flags);
	if (s[data->i] == 'u')
		print_usint(data, flags);
	if (s[data->i] == 'x')
		print_hexa(data, flags);
	if (s[data->i] == 'X')
		print_up_hexa(data, flags);
	if (s[data->i] == '%')
		ft_putchar(s[data->i]);
	if (flags)
		free(flags);
	(data->i)++; // checker comportement de printf si arg invalide
}

int 	ft_isflag(char c)
{
	if (ft_charstrcmp(c, FLAGS))
		return (1);
	return (0);
}

char 	*get_flags(char *s, t_params *data)
{
	char	*flags;

	data->j = data->i;
	while (s[data->i] != 0 && !ft_isflag(s[data->i]))
		(data->j)++;
	flags = ft_stndup(s[data->i], data->j - data->i); //flags == NULL si rien
	return (flags);
}

//cspdiuxX%
int		ft_printf(char const *str, ...)
{
	char		*s;
	t_params	*data;
	size_t		r_count;
	va_list		*ap;

	if (!(data = ft_init_struct(data, ap)))
	 	return (0);// creer va_list et ini count a 0
	s = (char *)str;
	va_start(ap, str);
	while (s[data->i])
	{
		if (s[data->i] != '%')
		{
			ft_putchar(s[(data->i)++]);
			data->count += 1;
		}
		else
			do_forrest(s, data, get_flags(&s[++(data->i)], data));
	}
	va_end(data->ap);
	r_count = data->count; // checker pour 0
	if (data)
		free(data);
	return (r_count);
}

/*
SYNTHAXE:
void lol2(char **s2)
{
  while (**s2)
    (*s2)++;
}

void lol(char **s2)
{
  while (**s2 != '5')
    (*s2)++;
  lol2(s2);
}

int main() {
  char const s[] = "12345678910";
  char *s2 = (char *)s;
  lol(&s2);
  s;
  printf("%s\n", s2);
  return 0;
} */
