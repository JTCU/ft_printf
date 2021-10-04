/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:20:39 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:20:39 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_numword(char const *s, char c)
{
	int	i;
	int	num;
	int	temp;

	i = 0;
	num = 0;
	temp = 0;
	if (*s == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			temp = 0;
		else if (temp == 0)
		{
			temp = 1;
			num++;
		}
		i++;
	}
	return (num);
}

int	ft_lenword(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_free(char const **s, int i)
{
	while (i > 0)
	{
		i--;
		free((void *)s[i]);
	}
	free(s);
	return (NULL);
}

char	**ft_splitcont(char const *s, char c)
{
	int		i;
	int		iword;
	int		ichar;
	char	**new;

	i = 0;
	iword = 0;
	new = (char **)malloc(sizeof(char *) * (ft_numword(s, c) + 1));
	if (!new)
		return (NULL);
	while (s[i] != '\0' && iword < ft_numword(s, c))
	{
		while (s[i] == c)
			i++;
		ichar = 0;
		new[iword] = (char *)malloc(ft_lenword(s, c, i) + 1);
		if (!(new))
			return (ft_free((char const **)new, iword));
		while (s[i] != '\0' && s[i] != c)
			new[iword][ichar++] = s[i++];
		new[iword][ichar] = '\0';
		iword++;
	}
	new[iword] = 0;
	return (new);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	else
		return (ft_splitcont(s, c));
}
