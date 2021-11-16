/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:41:29 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/11 16:02:18 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;
	int		size;

	size = ft_strlen(s);
	result = malloc(size + 1);
	if (result == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, (char) s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
