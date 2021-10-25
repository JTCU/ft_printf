#include "../inc/ft_printf.h"

int ft_spc_u(va_list spc, int i, int *ret)
{
	unsigned int num;
	int j;
	char *s;

	j = -1;
	num = va_arg(spc, int);
	s = ft_itoa((long int)num);
	while (s[++j])
		*ret = *ret + write(1, &s[j], 1);
	free(s);
	return (i);
}

int ft_spc_x(va_list spc, int i, int *ret)
{
	int j;
	unsigned long int num;
	char *s;

	j = -1;
	num = va_arg(spc, unsigned long int);
	s = ft_inttobase(num, 16);
	while (s[++j])
	{
		if (ft_isalpha((int)s[j]))
			s[j] = (char)ft_tolower((int)s[j]);
		*ret = *ret + write(1, &s[j], 1);
	}
	free(s);
	return (i);
}

int ft_spc_xx(va_list spc, int i, int *ret)
{
	int j;
	unsigned long long int num;
	char *s;

	j = 0;
	num = va_arg(spc, unsigned long long int);
	s = ft_inttobase(num, 16);
	while (s[j])
	{
		*ret = *ret + write(1, &s[j], 1);
		j++;
	}
	free(s);
	return (i);
}

int ft_spc_pr(int i, int *ret)
{
	*ret = *ret + write(1, "%%", 1);
	return (i);
}
