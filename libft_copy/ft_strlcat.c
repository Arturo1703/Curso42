/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:22:03 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/06 11:26:06 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str);

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		iterator;
	unsigned int		lensrc;
	unsigned int		lendst;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dest);
	iterator = 0;
	if(size < lendst + 1)
		return (lensrc + size);
	while ((src[iterator]!= '\0')
		&& ((size - lendst - 1) > iterator))
	{
		*(dest + lendst + iterator) = src[iterator];
		iterator ++;
	}
	*(dest + lendst + iterator) = '\0';
	return (lendst + lensrc);
}

