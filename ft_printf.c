#include "inc/ft_printf.h"

int ft_evaluate_format(va_list spc, const char *str, int i, int *ret)
{
	if (str[i] == 'c')
		i = ft_spc_c(spc, i, ret);
	else if (str[i] == 's')
		i = ft_spc_s(spc, i, ret);
	else if (str[i] == 'p')
		i = ft_spc_p(spc, i, ret);
	else if (str[i] == 'd')
		i = ft_spc_d(spc, i, ret);
	else if (str[i] == 'i')
		i = ft_spc_i(spc, i, ret);
	else if (str[i] == 'u')
		i = ft_spc_u(spc, i, ret);
	else if (str[i] == 'x')
		i = ft_spc_x(spc, i, ret);
	else if (str[i] == 'X')
		i = ft_spc_xx(spc, i, ret);
	else if (str[i] == '%')
		i = ft_spc_pr(i, ret);
	return (i);
}

int ft_printf(const char *str, ...)
{
	int		i;
	int		ret;
	va_list spc;

	va_start(spc, str);
	i = -1;
	ret = 0;
	while (str[++i])
	{
		if (str[i] == '%')
			i = ft_evaluate_format(spc, str, i + 1, &ret);
		else
			ret = ret + write(1, &str[i], 1);
	}
	va_end(spc);
	return (ret);
}