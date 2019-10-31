/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %id.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:17:04 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/31 17:14:13 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	test_id()
{
	int 	d = 42;
	int		d2 = -42;

	printf("\033[1;34m");
	printf("--------------------------------------TEST %%ID--------------------------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%dEND\n", d))
	== printf("START%dEND\n", d))
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

	if ((ft_printf("START%dEND\n", d2))
	== printf("START%dEND\n", d2))
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
	printf("--------------------- NBR %%D -------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%20dEND\n", d))
	== printf("START%20dEND\n", d))
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

	if ((ft_printf("START%20dEND\n", d2))
	== printf("START%20dEND\n", d2))
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

	if ((ft_printf("START%1dEND\n", d))
	== printf("START%1dEND\n", d))
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

	if ((ft_printf("START%1dEND\n", d2))
	== printf("START%1dEND\n", d2))
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
	printf("------------------ TIRET %%D ------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%-20dEND\n", d))
	== printf("START%-20dEND\n", d))
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

	if ((ft_printf("START%-20dEND\n", d2))
	== printf("START%-20dEND\n", d2))
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

	if ((ft_printf("START%-1dEND\n", d))
	== printf("START%-1dEND\n", d))
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

	if ((ft_printf("START%-1dEND\n", d2))
	== printf("START%-1dEND\n", d2))
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
	printf("------------------ POINT %%D ------------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%.10dEND\n", d))
	== printf("START%.10dEND\n", d))
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

	if ((ft_printf("START%.10dEND\n", d2))
	== printf("START%.10dEND\n", d2))
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

	if ((ft_printf("START%.dEND\n", 42))
	== printf("START%.dEND\n", 42))
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

	if ((ft_printf("START%.dEND\n", d2))
	== printf("START%.dEND\n", d2))
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

	if ((ft_printf("START%.dEND\n", 0))
	== printf("START%.dEND\n", 0))
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

	if ((ft_printf("START%.010dEND\n", 0))
	== printf("START%.010dEND\n", 0))
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

	if ((ft_printf("START%.000dEND\n", 0))
	== printf("START%.000dEND\n", 0))
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
	printf("---------------- WILDCARD %%D -----------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%*dEND\n", 20, d))
	== printf("START%*dEND\n", 20, d))
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

	if ((ft_printf("START%*dEND\n", 20, d2))
	== printf("START%*dEND\n", 20, d2))
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

	if ((ft_printf("START%*dEND\n", 1, d))
	== printf("START%*dEND\n", 1, d))
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

	if ((ft_printf("START%*dEND\n", 1, d2))
	== printf("START%*dEND\n", 1, d2))
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

	if ((ft_printf("START%*dEND\n", 1, 0))
	== printf("START%*dEND\n", 1, 0))
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

	if ((ft_printf("START%*dEND\n", 20, 0))
	== printf("START%*dEND\n", 20, 0))
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


	if ((ft_printf("START%-*.*dEND\n", 20, 10, 42))
	== printf("START%-*.*dEND\n", 20, 10, 42))
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

	if ((ft_printf("START%*.*dEND\n", 20, 10, 42))
	== printf("START%*.*dEND\n", 20, 10, 42))
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

	if ((ft_printf("START%.*dEND\n", 10, 42))
	== printf("START%.*dEND\n", 10, 42))
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

	if ((ft_printf("START%-*dEND\n", 10, 42))
	== printf("START%-*dEND\n", 10, 42))
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

		if ((ft_printf("START%0*dEND\n", 10, 42))
	== printf("START%0*dEND\n", 10, 42))
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
	printf("------------------ ZERO %%D -------------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%010dEND\n", d))
	== printf("START%010dEND\n", d))
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

	if ((ft_printf("START%010dEND\n", d2))
	== printf("START%010dEND\n", d2))
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

	if ((ft_printf("START%01dEND\n", d))
	== printf("START%01dEND\n", d))
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

	if ((ft_printf("START%01dEND\n", d2))
	== printf("START%01dEND\n", d2))
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
	printf("------------- TIRET + POINT %%D --------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%-10.5dEND\n", d))
	== printf("START%-10.5dEND\n", d))
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

	if ((ft_printf("START%-10.5dEND\n", d2))
	== printf("START%-10.5dEND\n", d2))
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

	if ((ft_printf("START%-5.10dEND\n", d))
	== printf("START%-5.10dEND\n", d))
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

	if ((ft_printf("START%-5.10dEND\n", d2))
	== printf("START%-5.10dEND\n", d2))
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

	if ((ft_printf("START%-1.2dEND\n", d))
	== printf("START%-1.2dEND\n", d))
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

	if ((ft_printf("START%-1.2dEND\n", d2))
	== printf("START%-1.2dEND\n", d2))
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

	if ((ft_printf("START%-10.1dEND\n", d))
	== printf("START%-10.1dEND\n", d))
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

	if ((ft_printf("START%-10.1dEND\n", d2))
	== printf("START%-10.1dEND\n", d2))
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

	if ((ft_printf("START%-10.dEND\n", 0))
	== printf("START%-10.dEND\n", 0))
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
	printf("------------- ZERO + POINT %%D --------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%010.20dEND\n", d))
	== printf("START%010.20dEND\n", d))
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

	if ((ft_printf("START%010.20dEND\n", d2))
	== printf("START%010.20dEND\n", d2))
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

	if ((ft_printf("START%010.1dEND\n", d))
	== printf("START%010.1dEND\n", d))
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

	if ((ft_printf("START%010.1dEND\n", d2))
	== printf("START%010.1dEND\n", d2))
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

	if ((ft_printf("START%010.dEND\n", 0))
	== printf("START%010.dEND\n", 0))
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
