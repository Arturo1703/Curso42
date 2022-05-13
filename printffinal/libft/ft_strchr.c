/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:12:18 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/08 16:40:55 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strchr(char *b, char c)
{
	int	i;

	if (c == '\0')
		return (b + ft_strlen(b));
	i = 0;
	while (b[i] || c == '\0')
	{
		if (b[i] == c)
			return (&b[i]);
		i++;
	}
	return (0);
}
