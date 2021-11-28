/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:57:33 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/28 20:03:28 by arlopez-         ###   ########.fr       */
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
			ft_putchar_fd(array[iterator], 1);
		else
		{
			iterator ++;
			if (!isvariable(array[iterator]))
				return (0);
			printvariable(array[iterator], &args);
		}
		iterator++;
		count ++;
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

void	printvariable(char mychar, va_list *args)
{
	if (mychar == 'c')
		ft_putchar_fd(va_arg(*args, int), 1);
	else if (mychar == 's')
		ft_putstr_fd(va_arg(*args, char *), 1);
	else if (mychar == 'c')
		ft_putchar_fd(va_arg(*args, int), 1);
	else if (mychar == 'p')
		printhexpointer(va_arg(*args, void *));
	else if (mychar == 'd')
		ft_putnbr_fd(va_arg(*args, int), 1);
	else if (mychar == 'i')
		ft_putnbr_fd(va_arg(*args, int), 1);
	else if (mychar == 'u')
		printunsignednum(va_arg(*args, unsigned int));
	else if (mychar == 'x')
		printhex(va_arg(*args, long long int), 0);
	else if (mychar == 'X')
		printhex(va_arg(*args, long long int), 1);
	else if (mychar == '%')
		ft_putchar_fd('%', 1);
}
