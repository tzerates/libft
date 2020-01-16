/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:22:05 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/06 16:29:39 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*pt_dest;
	unsigned char	*pt_src;
	size_t			i;

	pt_dest = (unsigned char*)dest;
	pt_src = (unsigned char*)src;
	i = 0;
	while (i < len)
	{
		pt_dest[i] = pt_src[i];
		if (pt_src[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		i++;
	}
	return (NULL);
}
