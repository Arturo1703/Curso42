/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:32:05 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/06 11:04:58 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;

    if (src < dst)
    {
        i = len - 1;
        while(i >= 0)
        {
            ((char *)dst)[i]= ((char *)src)[i];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            ((char *)dst)[i]= ((char *)src)[i];
            i++;
        }
    }
    return(dst);
}