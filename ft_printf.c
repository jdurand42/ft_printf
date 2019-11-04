/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:07:17 by jdurand           #+#    #+#             */
/*   Updated: 2019/11/04 11:58:07 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	do_forrest(char *s, t_params *data, char *s_flags)
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
	else if (s[data->i])
		print_random_char(data, s[data->i]);
	if (s_flags)
	{
		free(s_flags);
		s_flags = NULL;
	}
	data->i += 1; // checker comportement de printf si arg invalide
}

int 	ft_isflag(char c)
{
	int i = 0;
	char *str;

	str = "-0.*";
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
	char	*s_flags;

	s_flags = NULL;
	data->i += 1;
	data->j = data->i;
	//printf("j :%zu, i: %zu\n", data->j, data->i);
	while (ft_isflag(s[data->j]) || ft_isdigit(s[data->j]))
		data->j += 1;
	s_flags = ft_strndup(&s[data->i], data->j - data->i); //flags == NULL si rien
	data->i = data->j;
	data->flags = 0;
	//printf("s_flags: %s\n", s_flags);
	return (s_flags);
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
			do_forrest(s, &data, get_flags(s, &data));
	}
	va_end(data.ap);
	return (data.count);
}

int 	main(int ac, char **av)
{
	int count = 0;
	//int a = 2;
//	unsigned int usi1 = 125584855;
//	unsigned char uc1 = 255;

	(void)ac;
	(void)av;
	//count = ft_printf("str: %s\nstr2 : %s\nint 1: %d\n", "lololol", "str2", 25);
	//count = ft_printf("usi: %u\nint neg: %d\nchar : %c\nusi hexa: %x\n%X\n", usi1, -25884, '-', usi1, usi1);
	//count = ft_printf("unsigned char: %u\n", uc1);
	count = ft_printf("START%-2.5dEND\n", 42);
	int count2 = printf("START%-2.5dEND\n", 42);
	/*count = ft_printf("START%*.5sEND\n", "bouyachakalaka");
	int count2 = printf("START%*.5sEND\n", -30, "bouyachakalaka"); */
	//printf("itoa: %s\n", ft_itoa_base((unsigned int)&a, HEXA));
//	count = ft_printf("%%\n");
	//printf("%-12c\n", 'a');
	printf("\nmpf: count: %d, count2: %d\n", count, count2);
	//printf("rpf c: %d\n", printf("testtesttest\n"));
 }
