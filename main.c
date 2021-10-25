#include "inc/ft_printf.h"
#include <stdio.h>

int main (void)
{
	int retf;
	int retft;
	void *p;

	p = (void *)("Hola");
	printf("\nc:");
	retf = printf("	pritnf:		%c	%d", 'C', 12);
	printf("	ret: %d\n", retf);
	retft = ft_printf("	ft_pritnf:	%c	%d", 'C', 12);
	ft_printf("	ret: %d\n\n", retft);

	printf("\ns:");
	retf = printf("	pritnf:		%s", "hola qué tal");
	printf("	ret: %d\n", retf);
	retft = ft_printf("	ft_pritnf:	%s", "hola qué tal");
	ft_printf("	ret: %d\n\n", retft);

	printf("\nu:");
	retf = printf("	pritnf:		%u", -1);
	printf("	ret: %d\n", retf);
	retft = ft_printf("	ft_pritnf:	%u", -1);
	ft_printf("	ret: %d\n\n", retft);

	printf("\nx:");
	retf = printf("	pritnf:		%x", 2147483);
	printf("	ret: %d\n", retf);
	retft = ft_printf("	ft_pritnf:	%x", 2147483);
	ft_printf("	ret: %d\n\n", retft);

	printf("\nX:");
	retf = printf("	pritnf:		%X", 1234567);
	printf("	ret: %d\n", retf);
	retft = ft_printf("	ft_pritnf:	%X", 1234567);
	ft_printf("	ret: %d\n\n", retft);

	printf("\np:");
	retf = printf("	pritnf:		%p", p);
	printf("	ret: %d\n", retf);
	retft = ft_printf("	ft_pritnf:	%p", p);
	ft_printf("	ret: %d\n\n", retft);
}