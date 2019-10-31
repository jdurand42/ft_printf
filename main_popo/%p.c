/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   %p.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pganglof <pganglof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:44:21 by pganglof          #+#    #+#             */
/*   Updated: 2019/10/31 17:07:40 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	test_p()
{
	char 	str[] = "coucou";

	printf("\033[1;34m");
	printf("--------------------------------------TEST %%P--------------------------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%pEND\n", str))
	== printf("START%pEND\n", str))
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

	if ((ft_printf("START%pEND\n", NULL))
	== printf("START%pEND\n", NULL))
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
	printf("--------------------- NBR %%P -------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%20pEND\n", str))
	== printf("START%20pEND\n", str))
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

	if ((ft_printf("START%3pEND\n", str))
	== printf("START%3pEND\n", str))
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
	printf("------------------ TIRET %%P ------------------\n\n\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%-20pEND\n", str))
	== printf("START%-20pEND\n", str))
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

	if ((ft_printf("START%-3pEND\n", str))
	== printf("START%-3pEND\n", str))
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
	printf("------------------ POINT %%P ------------------\n");
	printf("\033[0m");
	printf("\n");

	printf("\033[1;35m");
	printf("POINT SEUL : WARNING\n\n\n");
	printf("\033[0m");
	printf("\n");



	printf("\033[0;34m");
	printf("---------------- WILDCARD %%P -----------------\n");
	printf("\033[0m");
	printf("\n");

	if ((ft_printf("START%-*pEND\n", 20, str))
	== printf("START%-*pEND\n", 20, str))
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

	if ((ft_printf("START%*pEND\n", 2, str))
	== printf("START%*pEND\n", 2, str))
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
	printf("------------------ ZERO %%P -------------------\n");
	printf("\033[0m");
	printf("\n");

	printf("\033[1;35m");
	printf("ZERO : WARNING\n\n\n");
	printf("\033[0m");
	printf("\n");
}
