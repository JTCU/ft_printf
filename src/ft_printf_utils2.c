#include "../inc/ft_printf.h"

int ft_spc_u(va_list spc, int i)
{
	unsigned int num;
	int j;
	char *s;

	j = -1;
	num = va_arg(spc, int);
	s = ft_strdup(ft_itoa((long int)num));
	while (s[++j])
		write(1, &s[j], 1);
	free(s);
	return (i);
}

int ft_spc_x(va_list spc, int i)
{
	int j;
	long int num;
	char *s;

	j = -1;
	num = va_arg(spc, int);
	s = ft_inttobase(num, 16);
	while (s[++j])
	{
		if (ft_isalpha((int)s[j]))
			s[j] = (char)ft_tolower((int)s[j]);
		write(1, &s[j], 1);
	}
	free(s);
	return (i);
}

int ft_spc_xx(va_list spc, int i)
{
	int j;
	long int num;
	char *s;

	j = -1;
	num = va_arg(spc, int);
	s = ft_inttobase(num, 16);
	while (s[++j])
		write(1, &s[j], 1);
	free(s);
	return (i);
}

int ft_spc_pr(int i)
{
	write(1, "%%", 1);
	return (i);
}
