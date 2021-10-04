/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturrill <jturrill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:19:55 by jturrill          #+#    #+#             */
/*   Updated: 2021/09/21 21:19:55 by jturrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*next;

	temp = (*lst)->next;
	while (temp)
	{
		next = temp->next;
		ft_lstdelone(temp, del);
		temp = next;
	}
	*lst = NULL;
}
