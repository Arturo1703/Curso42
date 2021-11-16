/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:58:52 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/16 19:10:53 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = (char *) malloc(len + 1);
	if (result == 0)
		return (0);
	if (ft_strlen(s) < start)
	{
		*result = 0;
		return (result);
	}
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
