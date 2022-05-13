/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:26:19 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/16 15:27:48 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;

	if (f == 0 || del == 0)
		return (0);
	while (lst != 0)
	{
		aux = (t_list *)(f)(lst->content);
		(del)(lst->content);
		lst->content = aux;
		lst = lst->next;
	}
	return (lst);
}
