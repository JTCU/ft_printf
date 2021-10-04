/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:21:12 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:21:12 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen((char *)s))
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	out = (char *)malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		out[i] = *(s + start + i);
		i++;
	}
	out[i] = '\0';
	return (out);
}
