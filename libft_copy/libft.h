/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:12:43 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/06 12:18:53 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
	#include <stdlib.h>
	int				ft_atoi(const char *str);
	void			ft_bzero(void *s, size_t n);
	void			*ft_calloc(size_t count, size_t size);
	int				ft_isalnum(int c);
	int				ft_isalpha(int c);
	int				ft_isascii(int c);
	int				ft_isdigit(int c);
	int				ft_isprint(int c);
	void 			*ft_memchr(const void *s, int c, size_t n);
	void    		*ft_memcpy(void *dst, const void *src, size_t n);
	void    		*ft_memmove(void *dst, const void *src, size_t len);
	void    		*ft_memset(void *b, int c, size_t len);
	char			*ft_strchr(char *b, char c);
	char			*ft_strdup(const char *src);
	unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
	size_t  		ft_strlcpy(char *dst, const char *src, size_t dstsize);
	size_t			ft_strlen(const char *str);
	int				ft_strncmp(char *s1, char *s2, unsigned int n);
	char			*ft_strrchr(char *b, char c);
	int 			ft_tolower(int c);
	int 			ft_toupper(int c);
	int 			ft_memcmp(const void *s1, const void *s2, size_t n);
	char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
#endif