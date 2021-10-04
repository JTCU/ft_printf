#include "inc/ft_printf.h"
#include <stdio.h>

int main (void)
{
	printf("----------\n");
	printf("pritnf:		%c\n", 'C');
	ft_printf("ft_pritnf:	%c\n", 'C');
	printf("----------\n");
	printf("pritnf:		%s\n", "hola qué tal");
	ft_printf("ft_pritnf:	%s\n", "hola qué tal");
	printf("----------\n");
	printf("pritnf:		%u\n", -1);
	ft_printf("ft_pritnf:	%u\n", -1);
	printf("----------\n");
	printf("pritnf:		%x\n", 1234567);
	ft_printf("ft_pritnf:	%x\n", 1234567);
	printf("----------\n");
	printf("pritnf:		%X\n", 1234567);
	ft_printf("ft_pritnf:	%X\n", 1234567);
	printf("----------\n");
	printf("pritnf:		%p\n", (void *)1234567);
	ft_printf("ft_pritnf:	%p\n", (void *)1234567);
	printf("----------\n");
}