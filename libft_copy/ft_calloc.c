/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:10:58 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/06 12:18:42 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    ft_bzero(void *s, size_t n);

void *ft_calloc(size_t count, size_t size)
{
	void    *result;

	result = malloc(count * size);
	if (result == NULL)
		return (0);
	ft_bzero(result, count * size);
	return result;
}
