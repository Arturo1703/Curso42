/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:38:19 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/11 15:39:14 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && \
		(((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
	{
		i++;
	}
	result = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
	return (result);
}
