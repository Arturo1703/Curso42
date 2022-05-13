/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printunsignednum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturo <Arturo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:09:42 by arlopez-          #+#    #+#             */
/*   Updated: 2022/05/12 14:00:22 by Arturo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printunsignednum(unsigned int	num)
{
	int	aux;
	if (num <= 2147483647)
		ft_putnbr_fd(num, 1);
	else
	{
		aux = num / 1000000000;
		ft_putnbr_fd(aux, 1);
		aux = num - aux * 1000000000;
		ft_putnbr_fd(aux, 1);
	}	
}
