/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:21:07 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:21:07 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	int		i;

	i = 0;
	last = 0;
	while (c > 256)
		c = c - 256;
	while (s[i])
	{
		if (s[i] == c)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		last = (char *)&s[i];
	if (last == 0)
		return (NULL);
	return (last);
}
