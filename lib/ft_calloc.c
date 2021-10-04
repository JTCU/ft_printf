/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:19:07 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:19:07 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*dest;

	total = nmemb * size;
	dest = malloc(total);
	if (!dest)
		return (0);
	ft_memset(dest, 0, total);
	return (dest);
}
