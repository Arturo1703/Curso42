/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:12:43 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/28 19:24:29 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"
int		ft_printf(const char *array, ...);
int		isvariable(char a);
void	printvariable(char mychar, va_list *args);
void	printhex(long long int num, int mayus);
void	printhexpointer(void *pointer);
void	printunsignednum(unsigned int	num);
#endif
