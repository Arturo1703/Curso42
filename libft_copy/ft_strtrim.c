/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:09:41 by Arturo            #+#    #+#             */
/*   Updated: 2021/11/08 17:36:07 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		findiftrim(char const to_find, char const *array);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	char	*result;
	int		i;
	int		size;

	size = ft_strlen(s1);
	aux = malloc(size);
	i = 0;
	while (findiftrim(s1[i], set))
	{
		size--;
		i++;
	}
	ft_strlcpy(aux, s1 + i, size);
	while (findiftrim(aux[size - 1], set))
		size --;
	result = malloc(size);
	ft_strlcpy(result, aux, size);
	return (result);
}

int	findiftrim(char const to_find, char const *array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (array[i] == to_find)
			return (1);
		i++;
	}
	return (0);
}
