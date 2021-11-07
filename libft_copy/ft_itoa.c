/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturo <Arturo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:41:25 by Arturo            #+#    #+#             */
/*   Updated: 2021/11/07 11:52:53 by Arturo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	int		size;
	char	*result;

	size = 0;
	if (n < 0)
		size = 1;
	size += getnumsize(n);
	result = malloc(size * 4);
	if(result)
		writenum(result, n);
	return (result);
}

int getnumsize(int n)
{
	int	result;

	result = 1;
	while (n > 10)
		result += getnumsize(n/10);
	return(result);
}

void writenum(char *result,int size)
{

}
