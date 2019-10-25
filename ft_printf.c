/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:07:17 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/25 18:08:44 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define FLAGS ".0-*"

void 	do_forrest(char *s, t_params *data, char *flags)
{
	// if ((id = get_id(*format, "cspduxX%")))
	// 	f[id](data, flags);
	//bilbo_flaggings(flags);
	//data->i += 1;
	if (s[data->i] == 'c')
		print_char(data, flags);
	else if (s[data->i] == 's')
		print_str(data, flags);
	else if (s[data->i] == 'p')
		print_void(data, flags);
	else if (s[data->i] == 'd' || s[data->i] == 'i')
		print_int(data, flags);
	else if (s[data->i] == 'u')
		print_usint(data, flags);
	else if (s[data->i] == 'x')
		print_hexa(data, flags);
	else if (s[data->i] == 'X')
		print_up_hexa(data, flags);
	else if (s[data->i] == '%')
		ft_putchar(s[data->i]);
	if (flags)
		free(flags);
	data->i += 1; // checker comportement de printf si arg invalide
}

int 	ft_isflag(char c)
{
	int i = 0;
	char *str;

	str = ".0-*";
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char 	*get_flags(char *s, t_params *data)
{
	char	*flags;

	flags = NULL;
	data->i += 1;
	data->j = data->i;
	//printf("j :%zu, i: %zu\n", data->j, data->i);
	while (ft_isflag(s[data->j]))
		data->j += 1;
	flags = ft_strndup(&s[data->i], data->j - data->i); //flags == NULL si rien
	data->i = data->j;
	printf("Flags: %s\n", flags);
	return (flags);
}

//cspdiuxX%
int		ft_printf(char const *str, ...)
{
	char		*s;
	t_params	data;
	//va_list		*ap;

	//if (!(data = (data)))
	ft_init_struct(&data);
	va_start(data.ap, str);
	s = (char *)str;
	//va_start(ap, str);
	if (s[data.i] == 0)
		ft_putchar(0);
	while (s[data.i])
	{
		if (s[data.i] != '%')
		{
			ft_putchar(s[(data.i)++]);
			data.count += 1;
		}
		else
			do_forrest(s, &data, get_flags(s, &data));//get_flags(&s[data.i], data));
	}
	va_end(data.ap);
	return (data.count);
}

int 	main(int ac, char **av)
{
	int count = 0;
//	unsigned int usi1 = 125584855;
//	unsigned char uc1 = 255;

	(void)ac;
	(void)av;
	//count = ft_printf("str: %s\nstr2 : %s\nint 1: %d\n", "lololol", "str2", 25);
	//count = ft_printf("usi: %u\nint neg: %d\nchar : %c\nusi hexa: %x\n%X\n", usi1, -25884, '-', usi1, usi1);
	//count = ft_printf("unsigned char: %u\n", uc1);
	count = ft_printf("int i: %.0**i\ndsadasdas%....00d\n", 1254, 585);
	count = ft_printf("%%\n");


	printf("mpf: count: %d\n", count);
	//printf("rpf c: %d\n", printf("testtesttest\n"));
}
