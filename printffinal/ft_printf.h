/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturo <Arturo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:12:43 by arlopez-          #+#    #+#             */
/*   Updated: 2022/05/12 16:21:16 by Arturo           ###   ########.fr       */
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
int			ft_printf(const char *array, ...);
int			isvariable(char a);
int			printvariable(char mychar, va_list *args);
int			printchar(int character);
int			printstr(char	*str);
int			printnbr(int num);
int			printunbr(unsigned int num);
int			counthex(unsigned int num, int mayus);
void		printhex(unsigned int num, int mayus);
int			printhexpointer(void *pointer);
void		printunsignednum(unsigned int	num);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
size_t		ft_strlen(const char *str);
char		*ft_itoa(int n);
void		*ft_calloc(size_t count, size_t size);
void		ft_bzero(void	*s, size_t	n);
#endif
