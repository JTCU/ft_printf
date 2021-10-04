/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:20:44 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:20:44 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*out;

	len = ft_strlen((char *)s);
	out = (char *)malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	out = ft_memcpy(out, s, len + 1);
	return (out);
}
