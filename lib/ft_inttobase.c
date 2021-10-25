#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_convbase(char *ret, unsigned long long int n, int i, int base)
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

char *ft_convbase_p(char *ret, unsigned long int n, int i, int base)
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

char *ft_inttobase(unsigned long long int n, int base)
{
	unsigned long long int ndup;
	char *s;
	int i;

	ndup = n;
	i = 0;
	if (ndup == 0)
		return (ft_strdup("0"));
	while (ndup >= (unsigned int)base)
	{
		ndup = (ndup / base);
		i++;
	}
	s = (char *)malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	s[i + 1] = '\0';
	s = ft_convbase(s, n, i, base);
	return (s);
}

char *ft_inttobase_p(unsigned long int n)
{
	unsigned long int ndup;
	char *s;
	int i;

	ndup = n;
	i = 0;
	if (ndup == 0)
		return (ft_strdup("0"));
	while (ndup > 16)
	{
		ndup = (ndup / 16);
		i++;
	}
	s = (char *)malloc(sizeof(char) * (i + 3));
	if (!s)
		return (NULL);
	s[i + 2] = '\0';
	s = ft_convbase_p(s, n, i + 1, 16);
	return (s);
}