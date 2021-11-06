/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:24:58 by arlopez-          #+#    #+#             */
/*   Updated: 2021/10/07 14:21:55 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0') && (i < n - 1) && (s1[i] == s2[i]))
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
