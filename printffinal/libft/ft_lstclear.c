/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:19:06 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/16 17:49:31 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*next;

	if (lst == 0)
		return ;
	aux = *lst;
	while (aux != 0)
	{
		next = aux->next;
		ft_lstdelone(aux, del);
		aux = next;
	}
	*lst = 0;
}
