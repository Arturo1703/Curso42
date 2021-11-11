/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:57:18 by Arturo            #+#    #+#             */
/*   Updated: 2021/11/08 17:35:09 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	result = malloc(ft_strlen(s1) + ft_strlen(s2));
	if ((ft_strlen(s1) != 0) && (result != 0))
		ft_strlcpy(result, s1, ft_strlen(s1));
	if ((ft_strlen(s2) != 0) && (result != 0))
		ft_strlcat(result, (char *) s2, ft_strlen(s2));
	return (result);
}
