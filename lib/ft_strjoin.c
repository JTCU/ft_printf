/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:20:50 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:20:50 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	l1;
	size_t	l2;
	int		i;

	if (!s1)
		return (NULL);
	else
	{
		l1 = ft_strlen(s1);
		l2 = ft_strlen(s2);
		out = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
		if (!out)
			return (NULL);
		i = -1;
		while (s1[++i] != '\0')
			*(out + i) = *(s1 + i);
		i = i - 1;
		while (s2[++i - l1] != '\0')
			*(out + i) = *(s2 + i - l1);
		*(out + i) = '\0';
		return (out);
	}
}
