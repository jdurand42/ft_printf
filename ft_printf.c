/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:07:17 by jdurand           #+#    #+#             */
/*   Updated: 2019/10/25 12:09:46 by jdurand          ###   ########.fr       */
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
	if (ft_charstrcmp(c, FLAGS))
		return (1);
	return (0);
}

int 	get_flags(char *s, t_params data)
{
	char	*flags;

	data.j = data.i;
	(void)s;
	printf("j :%zu, i: %zu\n", data.j, data.i);
//	while (s[data.j] != 0) //&& ft_isflag(s[data.j]))
//		data.j += 1;
//	printf("j :%zu, i: %zu\n", data.j, data.i);
//	flags = ft_strndup(&s[data.i], data.j - data.i); //flags == NULL si rien
	return (flags = NULL);
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
	while (s[data.i])
	{
		if (s[data.i] != '%')
		{
			ft_putchar(s[(data.i)++]);
			data.count += 1;
		}
		else
			do_forrest(s, &data, get_flags(&s[++(data.i)]));//get_flags(&s[data.i], data));
	}
	va_end(data.ap);
	return (data.count);
}

int 	main(int ac, char **av)
{
	int count = 0;
	unsigned int usi1 = 125584855;
	unsigned char uc1 = 255;

	(void)ac;
	(void)av;
	//count = ft_printf("str: %s\nstr2 : %s\nint 1: %d\n", "lololol", "str2", 25);
	count = ft_printf("usi: %u\nint neg: %d\nchar : %c\nusi hexa: %x\n%X\n", usi1, -25884, '-', usi1, usi1);
	count = ft_printf("unsigned char: %u\n", uc1);
	count = ft_printf("int i: %i\n", 1254);
	count = ft_printf("%%\n");


	printf("mpf: count: %d\n", count);
	//printf("rpf c: %d\n", printf("testtesttest\n"));
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
