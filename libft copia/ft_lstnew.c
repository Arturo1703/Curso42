/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:07:04 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/16 15:16:18 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	 t_list	*a;

	a = (t_list *)malloc(sizeof(*a));
	if (a == 0)
		return (0);
	a->content = content;
	a->next = 0;
	return (a);
}
