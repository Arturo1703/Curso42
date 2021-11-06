/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:17:39 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/04 17:26:47 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        ((char *)s)[i] = 0;
        i++;
    }
}