/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countvariable.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturo <Arturo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:18:04 by Arturo            #+#    #+#             */
/*   Updated: 2022/05/12 16:14:33 by Arturo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printchar(int character)
{
	ft_putchar_fd(character, 1);
	return (1);
}

int	printstr(char	*str)
{
	if (str == 0)
		return(write(1,"(null)", 6));
	ft_putstr_fd(str, 1);
	return(ft_strlen(str));
}
int	printnbr(int num)
{
	long long int	aux;
	int count;

	aux = num;
	count = 0;

	if (aux < 0)
	{
		count ++;
		aux *= -1;
	}
	else if (aux == 0)
		count = 1;
	
	while( aux > 0)
	{
		count ++;
		aux /= 10;
	}
	ft_putnbr_fd(num, 1);
	return (count);
}

int	printunbr(unsigned int num)
{
	long int	aux;
	int count;
	aux = (long int) num;
	count = 0;

	if (aux == 0)
		count = 1;
	
	while( aux > 0)
	{
		count ++;
		aux /= 10;
	}
	printunsignednum(num);
	return (count);
}

int	counthex(unsigned int num, int mayus)
{
	unsigned int	aux;
	int 			iterator;
	aux = num;
	iterator = 0;
	if (num == 0)
		iterator ++;
	else if (num < 0)
	{
		num *= -1;
		iterator ++; 
	}
	while (num > 0)
	{
		num /= 16;
		iterator++;
	}
	printhex(aux, mayus);
	return (iterator);
}
