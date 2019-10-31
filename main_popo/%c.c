/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %c.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:06:35 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/31 17:07:33 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	test_c()
{
	char 	c = 'A';

	printf("\033[1;34m");
	printf("--------------------------------------TEST %%C--------------------------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%cEND\n", c))
	== printf("START%cEND\n", c))
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
	printf("--------------------- NBR %%C -------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%20cEND\n", c))
	== printf("START%20cEND\n", c))
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

	if ((ft_printf("START%1cEND\n", c))
	== printf("START%1cEND\n", c))
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
	printf("------------------ TIRET %%C ------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%-20cEND\n", c))
	== printf("START%-20cEND\n", c))
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

	if ((ft_printf("START%-1cEND\n", c))
	== printf("START%-1cEND\n", c))
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

	if ((ft_printf("START%-20cEND\n", 0))
	== printf("START%-20cEND\n", 0))
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

	if ((ft_printf("START%-20cEND\n", 1))
	== printf("START%-20cEND\n", 1))
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

	/*printf("\033[0;34m");
	printf("------------------ POINT %%C ------------------\n");
	printf("\033[0m");
	printf("\n");

	printf("\033[1;35m");
	printf("POINT SEUL : WARNING\n\n\n");
	printf("\033[0m");
	printf("\n");*/

	printf("\033[0;34m");
	printf("---------------- WILDCARD %%C -----------------\n");
	printf("\033[0m");
	printf("\n");

	/*if ((ft_printf("START%*cEND\n", 20, c))
	== printf("START%*cEND\n", 20, c))
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

	if ((ft_printf("START%*cEND\n", 1, c))
	== printf("START%*cEND\n", 1, c))
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
	}*/

	if ((ft_printf("START%*cEND\n", 20, 0))
	== printf("START%*cEND\n", 20, 0))
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

	if ((ft_printf("START%*cEND\n", 20, 1))
	== printf("START%*cEND\n", 20, 1))
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


	/*printf("\033[0;34m");
	printf("------------------ ZERO %%C -------------------\n");
	printf("\033[0m");
	printf("\n");

	printf("\033[1;35m");
	printf("ZERO : WARNING\n\n\n");
	printf("\033[0m");
	printf("\n");*/
}
