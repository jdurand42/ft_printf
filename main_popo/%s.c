/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %s.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:06:00 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/31 17:07:43 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	test_s()
{
	char 	str[] = "coucou";

	printf("\033[1;34m");
	printf("--------------------------------------TEST %%S--------------------------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%sEND\n", str))
	== printf("START%sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%sEND\n", NULL))
	== printf("START%sEND\n", NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	printf("\033[0;34m");
	printf("--------------------- NBR %%S -------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%20sEND\n", str))
	== printf("START%20sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%3sEND\n", str))
	== printf("START%3sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%20sEND\n", NULL))
	== printf("START%20sEND\n", NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%3sEND\n", NULL))
	== printf("START%3sEND\n", NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	printf("\033[0;34m");
	printf("------------------ TIRET %%S ------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%-20sEND\n", str))
	== printf("START%-20sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%-3sEND\n", str))
	== printf("START%-3sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%-20sEND\n", NULL))
	== printf("START%-20sEND\n", NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%-3sEND\n", NULL))
	== printf("START%-3sEND\n", NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	printf("\033[0;34m");
	printf("--------------------- POINT %%S -------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%.sEND\n", str))
	== printf("START%.sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%.2sEND\n", str))
	== printf("START%.2sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%.20sEND\n", str))
	== printf("START%.20sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%.sEND\n", NULL))
	== printf("START%.sEND\n", NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%.2sEND\n", NULL))
	== printf("START%.2sEND\n", NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}


	printf("\033[0;34m");
	printf("------------- TIRET + POINT %%S --------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%-10.5sEND\n", str))
	== printf("START%-10.5sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%-5.10sEND\n", str))
	== printf("START%-5.10sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%-1.2sEND\n", str))
	== printf("START%-1.2sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%-10.1sEND\n", str))
	== printf("START%-10.1sEND\n", str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%-10.sEND\n", NULL))
	== printf("START%-10.sEND\n", NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	printf("\033[0;34m");
	printf("------------- ZERO + POINT %%S --------------\n");
	printf("\033[0m");
	printf("\n");

	printf("\033[1;35m");
	printf("ZERO + POINT : WARNING\n\n\n");
	printf("\033[0m");
	printf("\n");

	printf("\033[0;34m");
	printf("---------------- WILDCARD %%S -----------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%*sEND\n", 20, str))
	== printf("START%*sEND\n", 20, str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%*sEND\n", 1, str))
	== printf("START%*sEND\n", 1, str))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%*sEND\n", 1, NULL))
	== printf("START%*sEND\n", 1, NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}

	if ((ft_printf("START%*sEND\n", 20, NULL))
	== printf("START%*sEND\n", 20, NULL))
	{
		printf("\033[0;32m");
		printf("RETURN OK\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
	else
	{
		printf("\033[0;31m");
		printf("RETURN FALSE\n\n\n");
		printf("\033[0m");
		printf("\n");
	}
}
