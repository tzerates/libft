/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <tzerates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:41:55 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/09 20:44:24 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int x;
	unsigned int y;

	x = ft_strlen(dest);
	y = ft_strlen(src);
	if (size <= x)
		return (y + size);
	i = 0;
	while (src[i] && i + x < size - 1)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (x + y);
}
