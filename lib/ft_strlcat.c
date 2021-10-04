/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:20:52 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:20:52 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (size <= destlen)
		return (srclen + size);
	i = destlen;
	while (*src != '\0' && i < (size - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (destlen + srclen);
}
