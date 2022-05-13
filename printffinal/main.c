/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturo <Arturo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:06:34 by arlopez-          #+#    #+#             */
/*   Updated: 2022/05/12 16:13:51 by Arturo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main (void)
{
    int a;
    int b;
//    printf(" %x ", LONG_MAX);
    printf(" tu printf:%x ", LONG_MAX);
    ft_printf("\n mi printf:%x ", LONG_MAX);
    return (0);
}