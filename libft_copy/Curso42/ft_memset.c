/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:56:57 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/05 17:55:50 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while(i < len)
    {
        ((char *)b)[i] = c;
        i++;
    }
    return(b);
}