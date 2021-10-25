#include "../inc/ft_printf.h"

int ft_spc_c(va_list spc, int i, int *ret)
{
	char c;

	c = (char)va_arg(spc, int);
	*ret = *ret + write(1, &c, 1);
	return (i);
}

int ft_spc_s(va_list spc, int i, int *ret)
{
	int j;
	char *s;

	j = -1;
	s = ft_strdup(va_arg(spc, char *));
	while (s[++j])
		*ret = *ret + write(1, &s[j], 1);
	free(s);
	return (i);
}

int ft_spc_p(va_list spc, int i, int *ret)
{
	int j;
	unsigned long p;
	char *s;

	j = -1;
	p = va_arg(spc, unsigned long);
	s = ft_inttobase_p(p);
	*ret = *ret + write(1, "0x", 2);
	while (s[++j])
	{
		if (ft_isalpha((int)s[j]))
			s[j] = (char)ft_tolower((int)s[j]);
		*ret = *ret + write(1, &s[j], 1);
	}
	free(s);
	return (i);
}

int ft_spc_d(va_list spc, int i, int *ret)
{
	int j;
	char *s;

	j = -1;
	s = ft_itoa(va_arg(spc, int));
	while (s[++j])
		*ret = *ret + write(1, &s[j], 1);
	free(s);
	return (i);
}

int ft_spc_i(va_list spc, int i, int *ret)
{
	int j;
	char *s;

	j = -1;
	s = ft_itoa(va_arg(spc, int));
	while (s[++j])
		*ret = *ret + write(1, &s[j], 1);
	free(s);
	return (i);
}
