/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:45:44 by jdurand           #+#    #+#             */
/*   Updated: 2019/11/06 17:04:18 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int main()
{
	/*ft_printf("%s is a string\n", "");
	printf("%s is a string\n\n", "");*/
 		printf("ret: %d\n", printf("%", 20, 30));
		fflush(stdout);
		printf("\n");
 		printf("ret: %d\n", ft_printf("%", 20, 30));
		fflush(stdout);
		printf("\n");
	/*ft_printf("%.5s is a string\n", "");
	printf("%.5s is a string\n\n", "");*/
	return (0);
}
