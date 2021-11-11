/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:46:05 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/11 15:41:48 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	iterator;

	iterator = 0;
	while ((src[iterator] != '\0') && (dst[iterator] != '\0') \
		&& (iterator + 1 < dstsize))
	{
		dst[iterator] = src[iterator];
		iterator++;
	}
	if (iterator < dstsize)
	{
		dst[iterator] = '\0';
	}
	return (iterator);
}
