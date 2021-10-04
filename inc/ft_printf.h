#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../lib/libft.h"

# include <stdio.h>

int ft_printf(const char *str, ...);
int ft_spc_c(va_list spc, int i, int *ret);
int ft_spc_s(va_list spc, int i, int *ret);
int ft_spc_p(va_list spc, int i, int *ret);
int ft_spc_d(va_list spc, int i, int *ret);
int ft_spc_i(va_list spc, int i, int *ret);
int ft_spc_u(va_list spc, int i, int *ret);
int ft_spc_x(va_list spc, int i, int *ret);
int ft_spc_xx(va_list spc, int i, int *ret);
int ft_spc_pr(int i, int *ret);

#endif