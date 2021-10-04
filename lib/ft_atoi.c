/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:18:52 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:18:52 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	c;
	int	n;
	int	s;

	c = 0;
	n = 0;
	s = 1;
	while (nptr[c] == ' ' || nptr[c] == '\n' || nptr[c] == '\t'
		|| nptr[c] == '\v' || nptr[c] == '\f' || nptr[c] == '\r')
	{
		c++;
	}
	if ((nptr[c] == '+' || nptr[c] == '-') && nptr[c] != '\0')
	{
		if (nptr[c] == '-')
			s = -1;
		c++;
	}
	while ((nptr[c] >= '0' && nptr[c] <= '9') && nptr[c] != '\0')
	{
		n = (10 * n) + nptr[c] - 48;
		c++;
	}
	return (n * s);
}
