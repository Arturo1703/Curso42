/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:55:48 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/08 16:34:41 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	mychar;
	size_t			i;

	i = 0;
	mychar = c;
	while (i < n)
	{
		if (mychar == ((unsigned char *)s)[i])
			return (((void *)s) + i);
		i++;
	}
	return (0);
}
