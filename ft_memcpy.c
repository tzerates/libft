/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 13:49:52 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/06 15:10:25 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*pt_dest;
	unsigned char	*pt_src;
	size_t			i;

	if (!src && !dest)
		return (NULL);
	pt_dest = (unsigned char*)dest;
	pt_src = (unsigned char*)src;
	i = 0;
	while (i < len)
	{
		pt_dest[i] = pt_src[i];
		i++;
	}
	return (dest);
}
