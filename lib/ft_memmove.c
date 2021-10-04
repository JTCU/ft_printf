/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:20:21 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:20:21 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = -1;
	d = (char *)dest;
	s = (char *)src;
	if (d == s)
		return (dest);
	if (dest > src)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
		while (++i < n)
			d[i] = s[i];
	return (dest);
}
