/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:21:05 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:21:05 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	littlelen;

	i = 0;
	littlelen = ft_strlen((char *)little);
	if (littlelen == 0 || big == little)
		return ((char *)big);
	while (big [i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0'
			&& big[i + j] != '\0' && i + j < len)
			j++;
		if (j == littlelen)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
