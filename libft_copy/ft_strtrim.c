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
	char	*result;
	int	i;
	int	start;
	int	end;
	
	start = 0;
	end = 0
	i = 0;
	while (s1[i] && findiftrim(s1[i++], set))
		start++;
	i = ft_strlen(s1) - 1;
	while (findiftrim(s1[i--], set))	
		end++;
	result = malloc(i - start + 1);
	i = 0;
	while (start < ft_strlen(s1) - end)
		result[i++] = s1[start++];
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
