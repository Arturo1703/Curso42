/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:38:19 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/06 11:44:34 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;
	int     result;

	i = 0;
	if (n == 0)
		return (0);
	while ((((char *)s1)[i] != '\0') && (i < n - 1) && (((char *)s1)[i] == ((char *)s2)[i]))
	{
		i++;
	}
	result = ((char *)s1)[i] - ((char *)s2)[i];
	return (result);
}