/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:46:05 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/16 14:56:49 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	iterator;

	iterator = 0;
	if (dstsize > 0)
	{
		while ((src[iterator] != 0) && (iterator + 1 < dstsize))
		{
			dst[iterator] = src[iterator];
			iterator++;
		}
		dst[iterator] = '\0';
	}
	while (src[iterator] != 0)
		iterator++;
	return (iterator);
}
