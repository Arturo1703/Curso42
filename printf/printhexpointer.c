/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:31:10 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/28 17:18:14 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	getobase(int digit, int mayus);
void	rev_arrai(char *array);
void	printhexu(size_t num, int mayus);

void	printhexpointer(void *pointer)
{
	size_t	aux;

	ft_putstr_fd("0x", 1);
	aux = (size_t)pointer;
	printhexu(aux, 0);
}

void	printhexu(size_t num, int mayus)
{
	char			*myarray;
	int				iterator;

	iterator = 0;
	myarray = ft_calloc(12, 1);
	while (num > 0)
	{
		myarray[iterator] = getobase(num % 16, mayus);
		num /= 16;
		iterator++;
	}
	rev_arrai(myarray);
}

char	getobase(int digit, int mayus)
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

void	rev_arrai(char *array)
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
