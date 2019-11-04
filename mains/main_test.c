/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:45:44 by jdurand           #+#    #+#             */
/*   Updated: 2019/11/04 18:52:40 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int main()
{
	/*ft_printf("%s is a string\n", "");
	printf("%s is a string\n\n", "");*/
 		printf("ret: %d\n", ft_printf("%-----12.5d\n", 25));
		fflush(stdout);
 		printf("ret: %d\n", printf("%-----12.5d\n", 25));
		fflush(stdout);
	/*ft_printf("%.5s is a string\n", "");
	printf("%.5s is a string\n\n", "");*/
	return (0);
}
