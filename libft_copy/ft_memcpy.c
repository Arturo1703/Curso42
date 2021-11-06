/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:28:11 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/06 12:31:52 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if(!src)
        return(dst);
    while (i < n)
    {
        ((char *)dst)[i]= ((char *)src)[i];
        i++;
    }
    return(dst);
}