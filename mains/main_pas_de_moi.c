/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pas_de_moi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:37:54 by froussel          #+#    #+#             */
/*   Updated: 2019/11/06 14:56:51 by jdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

#define R "\x1b[31m"
#define G "\x1b[32m"
#define C "\x1b[36m"
#define S "\x1b[0m"
#define Y "\x1b[33m"
#define M "\x1b[34m"
#define B "\x1b[35m"

int main ()
{
	int i = 0, j = 0;
   	char ch = 'A';
   	char *str = "abcdef";
	void *ptr = str;
   	int no = 255;
   	int hex = 0X96;
   	unsigned int ui= 123456789;

	printf(B"=====================PRINTF VS FT_PRINTF=====================\n\n");
	printf("============== gestion de converstion simple ===================\n");
	printf("---------------------	  all type      ---------------------\n"S);
	printf("Char							%c \n"S, ch);
	ft_printf("Char							%c \n"S, ch);
   	printf("String							%s \n"S, str);
   	ft_printf("String							%s \n"S, str);
   	printf("Address							%p \n"S, ptr);
   	ft_printf("Address							%p \n"S, ptr);
   	printf("Integer							%d\n"S, no);
   	ft_printf("Integer							%d\n"S, no);
   	printf("Int (0 ou 0x)						%i \n"S, hex);
   	ft_printf("Int (0 ou 0x)						%i \n"S, hex);
   	printf("Unsignied int						%u \n"S, ui);
   	ft_printf("Unsignied int						%u \n"S, ui);
   	printf("Hexadecimal unsign int (lower-case)			%x \n"S, no);
   	ft_printf("Hexadecimal unsign int (lower-case)			%x \n"S, no);
   	printf("Hexadecimal unsign int (upper-case)			%X \n"S, no);
   	ft_printf("Hexadecimal unsign int (upper-case)			%X \n"S, no);
   	printf("Prints a literal %% character  				%% \n"S);
	ft_printf("Prints a literal %% character  				%% \n"S);

	printf(B"---------------------	  Type foirax    ---------------------\n");
	printf("-------- TEST 1 ---------\n"S);
   	i = printf("|%s| |%s|\n", NULL, "");
   	j = ft_printf("|%s| |%s|\n", NULL, "");
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 2 ---------\n"S);
	char st2[55];
	long stl[100000];
	void *stv = stl;
	i=printf("Address |%p| void*|%p| char[55] |%p|, long *|%p|\n", NULL,stv,st2,stl);
  	j=ft_printf("Address |%p| void*|%p| char[55] |%p|, long *|%p|\n", NULL,stv,st2,stl);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 3 ---------\n"S);
	i = printf("|%-2c|\n", '\0');
	j = ft_printf("|%-2c|\n", '\0');
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 4 ---------\n"S);
   	i=printf("Integer |%d| |%d|\n", -2147483648, 2147483647);
   	j=ft_printf("Integer |%d| |%d|\n", -2147483648, 2147483647);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 5 ---------\n"S);
   	i=printf("Unsignied int %u et 0 %u\n", 4294967295, 0);
   	j=ft_printf("Unsignied int %u et 0 %u\n", 4294967295, 0);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 6 ---------\n"S);
   	i=printf("Hexa time %x %X \n", 4294967295, 4294967295);
   	j=ft_printf("Hexa time %x %X \n", 4294967295, 4294967295);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 7 ---------\n"S);
   	i=printf("falg -0.*da.ns +le-%u%s.-50et apres 0x+%x.\n", 0, "text", 255);
   	j=ft_printf("falg -0.*da.ns +le-%u%s.-50et apres 0x+%x.\n", 0, "text", 255);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);

	printf(B"================= gestion de flads simple ===================\n");
	printf("-------- TEST 1 (width) ---------\n"S);
	char *txt = "Anticonstitutionnellement";
   	i=printf("|%1s|,|%24s|,|%25s|,|%26s|,|%50s|\n",txt,txt,txt,txt,txt);
   	j=ft_printf("|%1s|,|%24s|,|%25s|,|%26s|,|%50s|\n",txt,txt,txt,txt,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 2 (-width) ---------\n"S);
   	i=printf("|%-1s|,|%-24s|,|%-25s|,|%-26s|,|%-50s|\n",txt,txt,txt,txt,txt);
   	j=ft_printf("|%-1s|,|%-24s|,|%-25s|,|%-26s|,|%-50s|\n",txt,txt,txt,txt,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 3 (digit 0) ---------\n"S);
   	i=printf("|%01s|,|%024s|,|%025s|,|%026s|,|%050s|\n",txt,txt,txt,txt,txt);
   	j=ft_printf("|%01s|,|%024s|,|%025s|,|%026s|,|%050s|\n",txt,txt,txt,txt,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 4 (precision) ---------\n"S);
   	i=printf("|%.s||%.1s|,|%.24s|,|%.25s|,|%.26s|,|%.50s|\n",txt,txt,txt,txt,txt,txt);
   	j=ft_printf("|%.s||%.1s|,|%.24s|,|%.25s|,|%.26s|,|%.50s|\n",txt,txt,txt,txt,txt,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 5 (width) ---------\n"S);//
	unsigned int i2= 4294967295;
   	i=printf("|%1u|,|%24u|,|%25u|,|%26u|,|%50u|\n",i2,i2,i2,i2,i2);
   	j=ft_printf("|%1u|,|%24u|,|%25u|,|%26u|,|%50u|\n",i2,i2,i2,i2,i2);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 6 (-width) ---------\n"S);
    i=printf("|%-1u|,|%-24u|,|%-25u|,|%-26u|,|%-50u|\n",i2,i2,i2,i2,i2);
   	j=ft_printf("|%-1u|,|%-24u|,|%-25u|,|%-26u|,|%-50u|\n",i2,i2,i2,i2,i2);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 7 (digit 0) ---------\n"S);
    i=printf("|%01u|,|%024u|,|%025u|,|%026u|,|%050u|\n",i2,i2,i2,i2,i2);
   	j=ft_printf("|%01u|,|%024u|,|%025u|,|%026u|,|%050u|\n",i2,i2,i2,i2,i2);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 8 (precision) ---------\n"S);
    i=printf("|%.1u|,|%.24u|,|%.25u|,|%.26u|,|%.50u|\n",i2,i2,i2,i2,i2);
   	j=ft_printf("|%.1u|,|%.24u|,|%.25u|,|%.26u|,|%.50u|\n",i2,i2,i2,i2,i2);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);

	printf(B"================= gestion de flads avancee ===================\n");
	printf("-------- TEST 1 (* precision) ---------\n"S);
	i=printf("|%.*s||%.*s|,|%.*s|,|%.*s|,|%.*s|,|%.*s|\n",0,txt,10,txt,-3,txt,30,txt,-30,txt,-10,txt);
   	j=ft_printf("|%.*s||%.*s|,|%.*s|,|%.*s|,|%.*s|,|%.*s|\n",0,txt,10,txt,-3,txt,30,txt,-30,txt,-10,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 2 (* width) ---------\n"S);
   	i=printf("|%*s|,|%*s|,|%*s|,|%*s|,|%*s|,|%*s|\n",0,txt,10,txt,26,txt,-0,txt,-25,txt,-30,txt);
	j=ft_printf("|%*s|,|%*s|,|%*s|,|%*s|,|%*s|,|%*s|\n",0,txt,10,txt,26,txt,-0,txt,-25,txt,-30,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 3 (* precision) ---------\n"S);
	i=printf("|%.*d|,|%.*d|,|%.*d|,|%.*d|,|%.*d|,|%.*d|\n",0,no,10,no,-3,no,30,no,-30,no,-10,no);
   	j=ft_printf("|%.*d|,|%.*d|,|%.*d|,|%.*d|,|%.*d|,|%.*d|\n",0,no,10,no,-3,no,30,no,-30,no,-10,no);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 4 (* width) ---------\n"S);
   	i=printf("|%*d|,|%*d|,|%*d|,|%*d|,|%*d|,|%*d|\n",0,no,10,no,26,no,-0,no,-25,no,-30,no);
   	j=ft_printf("|%*d|,|%*d|,|%*d|,|%*d|,|%*d|,|%*d|\n",0,no,10,no,26,no,-0,no,-25,no,-30,no);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 5 (* digit) ---------\n"S);
   	i=printf("|%0*d|,|%0*d|,|%0*d|,|%0*d|,|%0*d|,|%0*d|\n",0,no,10,no,26,no,-0,no,-25,no,-30,no);
   	j=ft_printf("|%0*d|,|%0*d|,|%0*d|,|%0*d|,|%0*d|,|%0*d|\n",0,no,10,no,26,no,-0,no,-25,no,-30,no);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 6 (* precision) ---------\n"S);
	i=printf("|%.*s||%.*s|,|%.*s|,|%.*s|,|%.*s|,|%.*s|\n",0,txt,10,txt,-3,txt,30,txt,-30,txt,-10,txt);
   	j=ft_printf("|%.*s||%.*s|,|%.*s|,|%.*s|,|%.*s|,|%.*s|\n",0,txt,10,txt,-3,txt,30,txt,-30,txt,-10,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"---- TEST 7 (* width & precision) -----\n"S);
	i=printf("|%*.*s|,|%*.*s|,|%*.*s|\n",-5, 5,txt, -28, -10,txt, 10, -30,txt);
   	j=ft_printf("|%*.*s|,|%*.*s|,|%*.*s|\n",-5, 5,txt, -28, -10,txt, 10, -30,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"---- TEST 8 (* width & precision) -----\n"S);
   	i=printf("|%*.*s|,|%*.*s|,|%*.*s|,|%*.*s|\n",0, 15,txt, 10 ,10,txt, 20, 15,txt, 25, 25,txt);
   	j=ft_printf("|%*.*s|,|%*.*s|,|%*.*s|,|%*.*s|\n",0, 15,txt, 10 ,10,txt, 20, 15,txt, 25, 25,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"---- TEST 9 (* width & precision) -----\n"S);
   	i=printf("|%10.*s|,|%27.*s|,|%40.*s|,|%*.25s|\n",15,txt,29,txt, 0,txt, 25,txt);
   	j=ft_printf("|%10.*s|,|%27.*s|,|%40.*s|,|%*.25s|\n",15,txt,29,txt, 0,txt, 25,txt);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"---- TEST 10 (* width & precision) -----\n"S);
   	i=printf("|%*.*d|,|%*.*d|,|%*.*d|\n",-5, 5,no, -28, -10,no, 10, -30,no);
   	j=ft_printf("|%*.*d|,|%*.*d|,|%*.*d|\n",-5, 5,no, -28, -10,no, 10, -30,no);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"---- TEST 11 (* width & precision) -----\n"S);
   	i=printf("|%*.*d|,|%*.*d|,|%*.*d|,|%*.*d|\n",0, 15,no, 10 ,10,no, 20, 15,no, 25, 25,no);
	j=ft_printf("|%*.*d|,|%*.*d|,|%*.*d|,|%*.*d|\n",0, 15,no, 10 ,10,no, 20, 15,no, 25, 25,no);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);

	printf(B"====================== GO Crazy ! ==========================\n");
	printf("-------- TEST 1 (the multi ...) ---------\n"S);
   	i=printf("...%.......5d..%....d%-5d....%...*d..\n", 14, 14, 14, -5);
   	j=ft_printf("...%.......5d..%....d%-5d....%...*d..\n", 14, 14, 14, -5);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 2 (the multi .-.0.) ---------\n"S);
   	i=printf("...%..-..0.0.-.5d..%0.-00...d%-5d....%0.0..0*d..\n", 14, 14, 14, -5);
   	j=ft_printf("...%..-..0.0.-.5d..%0.-00...d%-5d....%0.0..0*d..\n", 14, 14, 14, -5);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 3 (the %%) ---------\n"S);
	i=printf("le pourcentage %% , %5%, %-5%, %.0%, %.%, %.1%, %.3%, preci %*.*%, %*%|\n",-5, -10,-5);
   	j=ft_printf("le pourcentage %% , %5%, %-5%, %.0%, %.%, %.1%, %.3%, preci %*.*%, %*%|\n",-5, -10,-5);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"-------- TEST 3.1 (the %%) ---------\n"S);
	i=printf("%010% | %0-10%|\n");
   	j=ft_printf("%010% | %0-10%|\n");
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 4 -------------\n"S);
	i=printf("Double -%--*d neg %--*d|\n", 5,10,-5,10);
   	j=ft_printf("Double -%--*d neg %--*d|\n", 5,10,-5,10);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 5 -------------\n"S);
	i=printf("Double 0%00*d neg %00*d|\n", 5,10,-5,10);
   	j=ft_printf("Double 0%00*d neg %00*d|\n", 5,10,-5,10);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);

	printf(B"--------------- TEST 6 -------------\n"S);
	i=printf("Double -%--*.*d neg %--*.*d neg %--*.*d|\n",5,3,10,-5,-3,10,5,-14);
   	j=ft_printf("Double -%--*.*d neg %--*.*d neg %--*.*d|\n",5,3,10,-5,-3,10,5,-14);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 7 -------------\n"S);
	i=printf("Double -%00*.*d neg %00*.*d neg %00*.*d| %005.0d| |%005.d|\n",5,3,10,-5,-3,10,5,-14,10, 32, 42);
   	j=ft_printf("Double -%00*.*d neg %00*.*d neg %00*.*d| %005.0d| |%005.d|\n",5,3,10,-5,-3,10,5,-14,10, 32, 42);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"----------TEST 8 undifined behavior-------------\n"S);
	i=printf("Double -%00*.*s neg %00*.*s neg %00*.*s| %005.0s| |%005.s|\n",5,3,"10",-5,-3,"10",5,-14,"10", "32", "42");
   	j=ft_printf("Double -%00*.*s neg %00*.*s neg %00*.*s| %005.0s| |%005.s|\n",5,3,"10",-5,-3,"10",5,-14,"10", "32", "42");
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 9 -------------\n"S);
	i=printf("Double -%--*s neg %--*s|\n", 5,"le42",-5,"le42");//undefined behavior
   	j=ft_printf("Double -%--*s neg %--*s|\n", 5,"le42",-5,"le42");//undefined behavior
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 10 -------------\n"S);
	i=printf("%2-*0*s|\n", 10, 16, "bonjor");
	j=ft_printf("%2-*0*s|\n", 10, 16, "bonjor");
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);

	printf(B"================= test with bag instruction =====================\n"S);
	printf(B"--------------- TEST 1 -------------\n"S);
	i=printf("bojour %05y\n");
   	j= ft_printf("bojour %05y\n");
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n") ;
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 2 -------------\n"S);
	i=printf("salut %05");
   	j= ft_printf("salut %05");
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 3 -------------\n"S);
	i=printf("salut %05-%05d\n", 5);
   	j= ft_printf("salut %05-%05d\n", 5);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 4 -------------\n"S);
	i=printf("salut %05mon cul");
	printf("\n");
   	j= ft_printf("salut %05mon cul");
	printf("\n");
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 5 -------------\n"S);
	i =printf("salut%05");
	printf("|\n");
	i+=printf("salut%m    ");
	i+=printf("|\n");
	i+=printf("salut%05m    ");
	i+=printf("|\n");
	i+=printf("salut%mmbmbr   ");
	i+=printf("|\n");
	printf("--------- vs ---------\n");
	j=ft_printf("salut%05");
	printf("|\n");
	j+=ft_printf("salut%m    ");
	j+=ft_printf("|\n");
	j+=ft_printf("salut%05m    ");
	j+=ft_printf("|\n");
	j+=ft_printf("salut%mmbmbr   ");
	j+=ft_printf("|\n");
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 6 -------------\n"S);
	i=printf("salut%-5monnom");
	i+=printf("|\n");
	i+=printf("salut%-5mon s %rnom");
	i+=printf("|\n");
	printf("--------- vs ---------\n");
	j=ft_printf("salut%-5monnom");
	j+=ft_printf("|\n");
	j+=ft_printf("salut%-5mon s %rnom");
	j+=ft_printf("|\n");
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 7 -------------\n"S);
	i=printf("%05s, %10s, %-10.3s|\n", NULL, NULL, NULL);
	j=ft_printf("%05s, %10s, %-10.3s|\n", NULL, NULL, NULL);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);



/*
	printf(B"===== cas impeu chelou rien a batre ? ========\n"S);
	printf(B"--------------- TEST 1 -------------\n"S);
   	i=printf("|%*.-30d|\n", 5, 15);
   	j=ft_printf("|%*.-30d|\n", 5, 15);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 2 -------------\n"S);
	i=printf("|%10.-15d|\n",no);
   	j=ft_printf("|%10.-15d|\n",no);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
	printf(B"--------------- TEST 3 -------------\n"S);
	i=printf("...%.......5d..%....%-5d....%...*d..\n", 14, 14, -5);
	j=ft_printf("...%.......5d..%....%-5d....%...*d..\n", 14, 14, -5);
	(i != j) ? printf(R"KO Diff return\n") : printf(G"OK\n");
	printf("RETURN = printf :%d ft_printf: %d\n"S, i, j);
*/

	return 0;
}
