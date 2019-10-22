void 	print_char(char c, char *flags)
{
	// if (flags)
	ft_putchar(c);
}

void 	print_str(char *str, char *flags)
{
	// if (!flags)
	ft_putstr(str);
}

void 	print_void(void *p, char *flags)
{
	????;
}

void 	print_int(int n, char *flags)
{
	char *s_int;

	// if (!flags)
	if (!(s_int = ft_itoa(n)))
		return ;
	ft_putstr(s_int);
	free(s_int);
	s_int = NULL;
}

void 	print_usint(unsigned int n, char *flags)
{
	char *s_usint;

	// if (!flags)
	if (!(s_usint = ft_itoa(n)))
		return ;
	ft_putstr(s_usint);
	free(s_usint);
	s_usint = NULL;
}

void 	print_hexa(unsigned int n, char *flags)
{
	char *s_hexa;

	//if (!flags)
	if (!(s_hexa = ft_itoa_base(n, "0123456789abcdef")))
		return ;
	ft_countchars(s_hexa);
	ft_putstr(s_hexa);
	free(s_hexa);
	s_hexa = NULL;
}

void 	print_up_hexa(unsigned int n, char *flags)
{
	char *s_bighexa;

	//if (!flags)
	if (!(s_bighexa = ft_itoa_base(n, "0123456789ABCDEF")))
		return ;
	ft_pustr(s_bighexa);
	free(s_bighexa);
	s_bighexa = NULL;
}
