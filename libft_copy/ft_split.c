/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturo <Arturo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:42:47 by Arturo            #+#    #+#             */
/*   Updated: 2021/11/07 11:20:45 by Arturo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

char **ft_split(char const *s, char c)
{
	char 	*aux;
	char	**result;
	int		i;
	int		f;
	int		line;

	aux = ft_calloc(1, ft_strlen(s) * 4);
	result = ft_calloc(1, ft_strlen(s) * 4);
	if(!aux)
		return(0);
	i = 0;
	line = 0;
	while(s[i])
	{
		f = 0;
		while ((s[i] != c) && (s[i]))
		{
			aux[f] = s[i];
			f++;
			i++; 
		}
		result[line] = ft_strdup((const char *)aux);
		if(!result[line])
			freemap(result, line);
		free(aux);
		i++;
		line++;
	}
	return(result);
}*/