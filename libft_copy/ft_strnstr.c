/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:48:56 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/11 15:47:33 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j] \
		 && haystack[i + j] != '\0' && len > i + j)
		{
			if (needle[j + 1] == '\0')
			{
				return (((char *)haystack + i));
			}
			j++;
		}
		i++;
	}
	return (0);
}
