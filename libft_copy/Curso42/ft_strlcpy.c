/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:46:05 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/06 11:31:46 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	iterator;
	size_t	aux;


	iterator = 0;
	aux = 0;
	while ((src[iterator] != '\0') && (iterator < dstsize - 1))
	{
		dst[iterator] = src[iterator];
		iterator++;
	}
	while (iterator + aux < dstsize)
	{
		dst[iterator + aux] = 0;
		aux++;
	}
	return (iterator);
}
