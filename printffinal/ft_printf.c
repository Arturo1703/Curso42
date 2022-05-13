/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturo <Arturo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:57:33 by arlopez-          #+#    #+#             */
/*   Updated: 2022/05/13 14:53:46 by Arturo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *array, ...)
{
	va_list	args;
	int		iterator;
	int		count;

	if (array == 0)
		return (0);
	va_start(args, array);
	iterator = 0;
	count = 0;
	while (array[iterator] != 0)
	{
		if (array[iterator] != '%')
		{
			ft_putchar_fd(array[iterator], 1);
			count ++;
		}
		else
		{
			iterator ++;
			if (!isvariable(array[iterator]))
				return (0);
			count += printvariable(array[iterator], &args);
		}
		iterator++;
	}
	return (count);
}

int	isvariable(char a)
{
	if ((a == 'c') || (a == 's') || (a == 'p') || (a == 'd') \
		|| (a == 'i') || (a == 'u') || (a == 'x') || (a == 'X') || (a == '%'))
		return (1);
	return (0);
}

int	printvariable(char mychar, va_list *args)
{
	int count;

	count = 0;
	if (mychar == 'c')
		count = printchar(va_arg(*args, int));
	else if (mychar == 's')
		count = printstr(va_arg(*args, char *));
	else if (mychar == 'p')
		count = printhexpointer(va_arg(*args, void *));
	else if (mychar == 'd' || mychar == 'i')
		count = printnbr(va_arg(*args, int));
	else if (mychar == 'u')
		count = printunbr(va_arg(*args, unsigned long int));
	else if (mychar == 'x')
		count = counthex(va_arg(*args, unsigned int), 0);
	else if (mychar == 'X')
		count = counthex(va_arg(*args, unsigned int), 1);
	else if (mychar == '%')
		count = printchar('%');
	return (count);
}
