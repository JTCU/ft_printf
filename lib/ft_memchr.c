/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:20:13 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:20:13 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		chr;
	const unsigned char	*src;

	i = 0;
	src = (const unsigned char *)s;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == chr)
		{
			return ((char *)&src[i]);
		}
		i++;
	}
	return (NULL);
}
