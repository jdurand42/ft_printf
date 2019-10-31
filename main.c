/*#include "ft_printf.h"
# include <stdio.h>



int main() {
    int i;
    i = 0;

	char string[] = "string";

	void *ptr_1;
	char *ptr_2;
	int  *ptr_3;
	void *ptr_null;
	char c;

	ptr_1 = string;

	ft_printf("\n%12d", 12);
	printf("\n%12d", 12);

	// ft_printf("|%0.010%s%s%->%c<- |%0-0.05d|\n", '\0', "salut", -42);
	//    printf("|%0.010%s%s%->%c<- |%0-0.05d|\n", '\0', "salut", -42);

	ptr_null = NULL;
	printf("\033[1;31m");
	printf("=============================================================================\n");
    printf("=============================================================================\n");
	printf("=============================================================== max======\n");
	printf("******************** PART 1 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|TEST %d|\n", 123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|TEST %d|\n", 123 );
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("||\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("||\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|fin des TESTs qui servenr a rien\200 < negatif|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|fin des TESTs qui servenr a rien\200 < negatif|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\n\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("123");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("123");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\n\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 2 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|ok %d , %d , %d , %d *** %u , %u, %u , %u|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %d , %d , %d , %d *** %u , %u, %u , %u|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|ok %x , %x , %x , %x *** %X , %X, %X , %X|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %x , %x , %x , %x *** %X , %X, %X , %X|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|ok %x , %x , %x , %x *** %X , %X, %X , %X|\n", -9999999999, -4294967296, 4294967295, -2147483648, -9999999999, -4294967296, 4294967295, -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %x , %x , %x , %x *** %X , %X, %X , %X|\n", -9999999999, -4294967296, 4294967295, -2147483648, -9999999999, -4294967296, 4294967295, -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|ok %i , %i , %i , %i\n", 123, -500000000000, 5000000000, -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %i , %i , %i , %i\n", 123, -500000000000, 5000000000, -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 3 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|ok %p , %p , %p , %p|\n", ptr_1, ptr_2, ptr_3, ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %p , %p , %p , %p|\n", ptr_1, ptr_2, ptr_3, ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 4 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%10%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%%%%%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%%%%%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 5 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...50%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...50%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 6 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...50k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...50k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 7 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10d|\n", 123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10d|\n", 123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10d|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10d|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5d|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5d|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...5d|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5d|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 8 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%*.***d|\n",-50, -60, -80, -90, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*.***d|\n",-50, -60, -80, -90, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-*..-.10*d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-*..-.10*.d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*.d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%-*..-.10*0d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*0d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%0.-*..-.10*0d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%0.-*..-.10*0d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%10*0d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10*0d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|%.2d|\n",54321);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.2d|\n",54321);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|%.d|\n",54321);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.d|\n",54321);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 9 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10p|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10p|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10p|\n", ptr_1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10p|\n", ptr_1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-0*..-.5p|\n", -30, ptr_2);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-0*..-.5p|\n", -30, ptr_2);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...5p|\n", ptr_3);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5p|\n", ptr_3);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 10 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-*.***p|\n",-50, -60, -80, -90, ptr_1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*.***p|\n",-50, -60, -80, -90, ptr_1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-*..-.10*p|\n",20, 30, ptr_2);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*p|\n",20, 30, ptr_2);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-*..-.10*.p|\n",20, 30, ptr_3);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*.p|\n",20, 30, ptr_3);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%-*..-.10*0p|\n",20, -30, ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*0p|\n",20, -30, ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%0.-*..-.10*0p|\n",20, 30, ptr_1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%0.-*..-.10*0p|\n",20, 30, ptr_1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%10**0p|\n",20, 30, ptr_2);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10**0p|\n",20, 30, ptr_2);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 11 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10xdc|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10xdc|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10xdc|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10xdc|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5xdc|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5xdc|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...5xdc|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5xdc|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 12 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-*.***xdc|\n",-50, -60, -80, -20, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*.***xdc|\n",-50, -60, -80, -20, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-*..-.10*xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-*..-.10*.xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*.xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%-*...10*0xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*...10*0xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%0.-*..-.10*0xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%0.-*..-.10*0xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%10*0xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10*0xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 13 (TRIKY > precision 0 padding 0 value 0) :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1    %%d = 0\n");
		i = printf("|ok %.0d|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.0d|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2    %%i = 0\n");
		i = printf("|ok %.0i|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.0i|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3    %%u = 0\n");
		i = printf("|ok %.0u|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.0u|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4    %%x = 0\n");
		i = printf("|ok %.x|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.x|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5    %%X = 0\n");
		i = printf("|ok %.X|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.X|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6    %%p = null\n");
		i = printf("|ok %.p|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.p|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7    %%p = null  padding 3\n");
		i = printf("|ok %3.p|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %3.p|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8    %%p = null  padding 5\n");
		i = printf("|ok %05.p|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %05.p|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9    %%c = 0\n");
		i = printf("|ok %c|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %c|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10    %%c = 9\n");
		i = printf("|ok %.c|\n", 9);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.c|\n", 9);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11    %%c = '@'\n");
		i = printf("|ok %.c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12    %%s = 'string'\n");
		i = printf("|ok %.s|\n", string);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.s|\n", string);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 13    %%s = (null)\n");
		i = printf("|ok %.s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 14    k = other\n");
		i = printf("|ok %.k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 14 (neg padding == pos padding + minus option) :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|ok %*.*d|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*d|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|ok %*.*i|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*i|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|ok %*.*u|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*u|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|ok %*.*x|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*x|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|ok %*.*X|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*X|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|ok %*.*p|\n", -20, -10, ptr_1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*p|\n", -20, -10, ptr_1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|ok %*.*c|\n", -20, -10, '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*c|\n", -20, -10, '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|ok %*.*s|\n", -20, -10, "riddim dubstep");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*s|\n", -20, -10, "riddim dubstep");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 15 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...5c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%c|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%c|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%c|\n", 16);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%c|\n", 16);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|%02...5c|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%02...5c|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|%020...5c|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5c|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9\n");
		i = printf("|%05...2c|\n", 16);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%05...2c|\n", 16);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10\n");
		i = printf("|%05...2c|\n", '*');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%05...2c|\n", '*');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11\n");
		i = printf("|%05...2c|\n", '*');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%05...2c|\n", '*');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 16 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%.10s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.10s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%.1s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.1s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%.s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%.30s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.30s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%.3s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.3s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%.4s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.4s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|%.5s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.5s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|%.6s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.6s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9\n");
		i = printf("|%s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10\n");
		i = printf("|%.s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11\n");
		i = printf("|%.1s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.1s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%.5s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.5s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%.10s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.10s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 17 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%20.10s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.10s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%20.1s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.1s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%20.s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%20.30s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.30s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%20.3s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.3s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%20.4s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.4s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|%20.5s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.5s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|%20.6s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.6s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9\n");
		i = printf("|%s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10\n");
		i = printf("|%20.s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11\n");
		i = printf("|%20.1s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.1s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%20.5s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.5s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%15.10s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%15.10s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 18 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%10.50.**--*dcsdp%%%@@@%**Xpcd%%d|\n", -25, -15, -5, -33, 4, 6, -4897987565423, 123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10.50.**--*dcsdp%%%@@@%**Xpcd%%d|\n", -25, -15, -5, -33, 4, 6, -4897987565423, 123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|sblpoup%000.*000-d%%%20.1s %0.-10d|\n", 20, -9879879898, "uneLongueChaineDeChar", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|sblpoup%000.*000-d%%%20.1s %0.-10d|\n", 20, -9879879898, "uneLongueChaineDeChar", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%*.*p%%|\n", -20, 15, -12345);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%*.*p%%|\n", -20, 15, -12345);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 19 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1 - 1\n");
		i = printf("%@@@%", "test"); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%@@@%", "test"); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 2\n");
		i = printf("%@@@%10", "test"); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%@@@%10", "test"); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 3\n");
		i = printf("%@@@%.10", "test"); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%@@@%.10", "test"); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 1\n");
		i = printf("@moulitest: %5.x %5.0x", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                         \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %5.x %5.0x", 0, 0); printf("|fin");
		printf("                         \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 2\n");
		i = printf("@moulitest: %5.7x %05.13x", 0, 0); printf("|fin");
			fflush(stdout);
		printf("               \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %5.7x %05.13x", 0, 0); printf("|fin");
		printf("               \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 3\n");
		i = printf("@moulitest: %.7p %5.0p", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                     \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7p %5.0p", 0, 0); printf("|fin");
		printf("                     \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 4\n");
		i = printf("@moulitest: %.7p %5.0X", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                     \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7p %5.0X", 0, 0); printf("|fin");
		printf("                     \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 5\n");
		i = printf("@moulitest: %.7p %5.0u", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                     \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7p %5.0u", 0, 0); printf("|fin");
		printf("                     \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 6 - 1\n");
		i = printf("@moulitest: %.7c %5.012c", 0, '@'); printf("|fin");
			fflush(stdout);
		printf("                              \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7c %5.012c", 0, '@'); printf("|fin");
		printf("                              \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 6 - 2\n");
		i = printf("@moulitest: %.7c %5.0c", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                               \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7c %5.0c", 0, 0); printf("|fin");
		printf("                               \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 7\n");
		i = printf("@moulitest: %.7s %5.0s", ptr_null, ptr_null); printf("|fin");
			fflush(stdout);
		printf("                        \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7s %5.0s", ptr_null, ptr_null); printf("|fin");
		printf("                        \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("%.2c", NULL); printf("|fin");
			fflush(stdout);
		printf("                                                \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.2c", NULL); printf("|fin");
		printf("                                                \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("@moulitest: %c", 0); printf("|fin");
			fflush(stdout);
		printf("                                    \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %c", 0); printf("|fin");
		printf("                                    \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%2c", 0); printf("|fin");
			fflush(stdout);
		printf("                                               \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%2c", 0); printf("|fin");
		printf("                                               \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("null %c and text", 0); printf("|fin");
			fflush(stdout);
		printf("                                  \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("null %c and text", 0); printf("|fin");
		printf("                                  \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("@moulitest: %5.d %5.0d", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                         \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %5.d %5.0d", 0, 0); printf("|fin");
		printf("                         \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 20 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1 - 1\n");
		i = printf("%.2c", NULL); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.2c", NULL); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 2\n");
		i = printf("@moulitest: %c", 0); printf("|fin");
			fflush(stdout);
		printf("                                 \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %c", 0); printf("|fin");
		printf("                                 \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 3\n");
		i = printf("%2c", 0); printf("|fin");
			fflush(stdout);
		printf("                                            \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%2c", 0); printf("|fin");
		printf("                                            \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 1\n");
		i = printf("%05d", -42); printf("|fin");
			fflush(stdout);
		printf("                                            \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05d", -42); printf("|fin");
		printf("                                            \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 2\n");
		i = printf("%05i", -42); printf("|fin");
			fflush(stdout);
		printf("                                            \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05i", -42); printf("|fin");
		printf("                                            \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 3\n");
		i = printf("%05u", -42); printf("|fin");
			fflush(stdout);
		printf("                                       \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05u", -42); printf("|fin");
		printf("                                       \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 4\n");
		i = printf("%05x", -42); printf("|fin");
			fflush(stdout);
		printf("                                         \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05x", -42); printf("|fin");
		printf("                                         \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 5\n");
		i = printf("%05X", -42); printf("|fin");
			fflush(stdout);
		printf("                                         \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05X", -42); printf("|fin");
		printf("                                         \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 6\n");
		i = printf("%05c", -42); printf("|fin");
			fflush(stdout);
		printf("                                            \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05c", -42); printf("|fin");
		printf("                                            \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 20 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1 - 1\n");
		i = printf("%5d", -42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5d", -42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 2\n");
		i = printf("%5i", -42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5i", -42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 3\n");
		i = printf("%5u", -42); printf("|fin");
			fflush(stdout);
		printf("                                        \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5u", -42); printf("|fin");
		printf("                                        \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 4\n");
		i = printf("%5x", -42); printf("|fin");
			fflush(stdout);
		printf("                                          \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5x", -42); printf("|fin");
		printf("                                          \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 5\n");
		i = printf("%05X", -42); printf("|fin");
			fflush(stdout);
		printf("                                          \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05X", -42); printf("|fin");
		printf("                                          \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 6\n");
		i = printf("%05p", -42); printf("|fin");
			fflush(stdout);
		printf("                                        \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05p", -42); printf("|fin");
		printf("                                        \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 7\n");
		i = printf("%05c", -42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05c", -42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 21 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("{%3c}", 0); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("{%3c}", 0); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("%s%d%p%%%i%u%x%X%c","bonjour", 42, &c, 42, 42, 42, 42, 'c'); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%s%d%p%%%i%u%x%X%c","bonjour", 42, &c, 42, 42, 42, 42, 'c'); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("{%*c}", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("{%*c}", 0, 0); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4 - 1\n");
		i = printf("{%05.*d}", -15, 42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("{%05.*d}", -15, 42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4 - 2\n");
		i = printf("{%05.*u}", -10, 42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("{%05.*u}", -10, 42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);




		while (1)
			;
	return (0);
}
*/
