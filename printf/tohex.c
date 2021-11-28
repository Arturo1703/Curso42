/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tohex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:53:39 by Arturo            #+#    #+#             */
/*   Updated: 2021/11/28 17:17:55 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	gettobase(int digit, int mayus);
void	rev_array(char *array);

void	printhex(long long int num, int mayus)
{
	long long int	vnum;
	char			*myarray;
	int				iterator;
	int				negative;

	iterator = 0;
	negative = 0;
	myarray = ft_calloc(20, 1);
	vnum = num;
	if (vnum == 0)
		myarray[iterator] = '0';
	else if (num < 0)
	{
		vnum = num * -1;
		negative = 1;
	}
	while (vnum > 0)
	{
		myarray[iterator] = gettobase(vnum % 16, mayus);
		vnum /= 16;
		iterator++;
	}
	if (negative == 1)
		myarray[iterator] = '-';
	rev_array(myarray);
}

char	gettobase(int digit, int mayus)
{
	char			aux;

	if (digit >= 10 && mayus == 1)
		aux = 'A' + digit - 10;
	else if (digit >= 10 && mayus == 0)
		aux = 'a' + digit - 10;
	else
		aux = '0' + digit;
	return (aux);
}

void	rev_array(char *array)
{
	int		i;
	int		size;
	char	aux;

	i = 0;
	size = ft_strlen(array) - 1;
	while (i < size)
	{
		aux = array[i];
		array[i] = array[size];
		array[size] = aux;
		i++;
		size--;
	}
	ft_putstr_fd(array, 1);
	free(array);
}
