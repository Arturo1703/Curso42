/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlopez- <arlopez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:46:16 by arlopez-          #+#    #+#             */
/*   Updated: 2021/11/08 16:32:25 by arlopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((('a' <= c) && (c <= 'z'))
		|| (('A' <= c) && (c <= 'Z')))
		return (c);
	return (0);
}
