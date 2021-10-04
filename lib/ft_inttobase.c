#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_convbase(char *ret, long int n, int i, int base)
{
	i++;
	while (n != 0)
	{
		if ((n % base) < 10)
			ret[i - 1] = (n % base) + 48;
		else
			ret[i - 1] = (n % base) + 55;
		n = (n / base);
		i--;
	}
	return (ret);
}

char *ft_inttobase(long int n, int base)
{
	long int ndup;
	char *s;
	int i;

	ndup = n;
	i = 0;
	if (ndup == 0)
		return (ft_strdup("0"));
	while (ndup > base)
	{
		ndup = (ndup / base);
		i++;
	}
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	s = ft_convbase(s, n, i, base);
	return (s);
}