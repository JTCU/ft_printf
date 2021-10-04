/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:21:00 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:21:00 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*out;

	if (!s)
		return (NULL);
	else
	{
		i = 0;
		len = ft_strlen((char *)s);
		out = (char *)malloc(sizeof(char) * (len + 1));
		if (out == NULL)
			return (NULL);
		while (i < len)
		{
			out[i] = f((unsigned int)i, s[i]);
			i++;
		}
		out[i] = '\0';
		return (out);
	}
}
