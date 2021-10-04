/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:20:31 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:20:31 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr(long n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		putnbr(-n, fd);
	}
	else if (n >= 10)
	{
		putnbr(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else if (n < 10)
		ft_putchar_fd(n + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	putnbr(n, fd);
}
