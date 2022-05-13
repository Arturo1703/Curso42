/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:11:30 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/11 15:29:50 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	if (!src)
		return (0);
	while (src[i] != '\0')
		i++;
	aux = malloc(i + 1);
	if (aux != 0)
	{
		j = 0;
		while (j < i)
		{
			aux[j] = src[j];
			j++;
		}
		aux[j] = '\0';
	}
	return (aux);
}
