/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:41:25 by Arturo            #+#    #+#             */
/*   Updated: 2021/11/08 17:33:59 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		getnumsize(int n);
void	writenum(char *result, int num, int size);

char	*ft_itoa(int n)
{
	int		size;
	char	*result;

	size = 0;
	if (n < 0)
		size = 1;
	size += getnumsize(n);
	result = malloc(size);
	if (result)
		writenum(result, n, size);
	return (result);
}

int	getnumsize(int n)
{
	int	result;

	result = 1;
	while (n > 10)
		result += getnumsize(n / 10);
	return (result);
}

void	writenum(char *result, int num, int size)
{
	int	pos;
	int	aux;

	pos = 1;
	aux = 1;
	while (size > pos)
	{
		aux *= 10;
		pos++;
	}
	pos = 0;
	while (pos < size)
	{
		result[pos] = num / aux;
		aux = aux / 10;
		pos++;
	}
}
