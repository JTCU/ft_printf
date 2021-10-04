/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:21:37 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:21:37 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);
int		ft_isalpha(int c);
int		ft_tolower(int c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_itoa(long int n);
char	*ft_inttobase(long int n, int base);

#endif