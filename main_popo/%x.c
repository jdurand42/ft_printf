/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %x.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 15:05:46 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/31 17:10:32 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	test_x()
{
	int 	x = 654564;

	printf("\033[1;34m");
	printf("--------------------------------------TEST %%X--------------------------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%xEND\n", x))
	== printf("START%xEND\n", x))
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

	if ((ft_printf("START%XEND\n", x))
	== printf("START%XEND\n", x))
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

	if ((ft_printf("START%XEND\n", 0))
	== printf("START%XEND\n", 0))
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
	printf("--------------------- NBR %%x -------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%20xEND\n", x))
	== printf("START%20xEND\n", x))
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

	if ((ft_printf("START%1xEND\n", x))
	== printf("START%1xEND\n", x))
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
	printf("------------------ TIRET %%x ------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%-20xEND\n", x))
	== printf("START%-20xEND\n", x))
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

	if ((ft_printf("START%-1xEND\n", x))
	== printf("START%-1xEND\n", x))
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
	printf("------------------ POINT %%x ------------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%.10xEND\n", x))
	== printf("START%.10xEND\n", x))
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

	if ((ft_printf("START%.xEND\n", x))
	== printf("START%.xEND\n", x))
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

	if ((ft_printf("START%.000xEND\n", 0))
	== printf("START%.000xEND\n", 0))
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
	printf("---------------- WILDCARD %%x -----------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%*xEND\n", 20, x))
	== printf("START%*xEND\n", 20, x))
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

	if ((ft_printf("START%*xEND\n", 1, x))
	== printf("START%*xEND\n", 1, x))
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

	if ((ft_printf("START%*xEND\n", 1, 0))
	== printf("START%*xEND\n", 1, 0))
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

	if ((ft_printf("START%*xEND\n", 20, 0))
	== printf("START%*xEND\n", 20, 0))
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
	printf("------------------ ZERO %%x -------------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%010xEND\n", x))
	== printf("START%010xEND\n", x))
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

	if ((ft_printf("START%01xEND\n", x))
	== printf("START%01xEND\n", x))
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

	if ((ft_printf("START%01xEND\n", 0))
	== printf("START%01xEND\n", 0))
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

	if ((ft_printf("START%010xEND\n", 0))
	== printf("START%010xEND\n", 0))
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
	printf("------------- TIRET + POINT %%x --------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%-10.5xEND\n", x))
	== printf("START%-10.5xEND\n", x))
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

	if ((ft_printf("START%-5.10xEND\n", x))
	== printf("START%-5.10xEND\n", x))
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

	if ((ft_printf("START%-1.2xEND\n", x))
	== printf("START%-1.2xEND\n", x))
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

	if ((ft_printf("START%-10.1xEND\n", x))
	== printf("START%-10.1xEND\n", x))
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

	if ((ft_printf("START%-10.10xEND\n", x))
	== printf("START%-10.10xEND\n", x))
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

	if ((ft_printf("START%-10.20xEND\n", x))
	== printf("START%-10.20xEND\n", x))
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

	if ((ft_printf("START%-10.xEND\n", 0))
	== printf("START%-10.xEND\n", 0))
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

	if ((ft_printf("START%-10.20xEND\n", 0))
	== printf("START%-10.20xEND\n", 0))
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

	if ((ft_printf("START%-10.1xEND\n", 0))
	== printf("START%-10.1xEND\n", 0))
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
	printf("------------- ZERO + POINT %%x --------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%010.20xEND\n", x))
	== printf("START%010.20xEND\n", x))
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

	if ((ft_printf("START%010.1xEND\n", x))
	== printf("START%010.1xEND\n", x))
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

	if ((ft_printf("START%010.10xEND\n", x))
	== printf("START%010.10xEND\n", x))
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

	if ((ft_printf("START%020.10xEND\n", x))
	== printf("START%020.10xEND\n", x))
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

	if ((ft_printf("START%01.2xEND\n", x))
	== printf("START%01.2xEND\n", x))
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

	if ((ft_printf("START%010.xEND\n", 0))
	== printf("START%010.xEND\n", 0))
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

	if ((ft_printf("START%010.5xEND\n", 0))
	== printf("START%010.5xEND\n", 0))
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
