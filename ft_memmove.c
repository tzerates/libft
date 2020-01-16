/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <tzerates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:55:49 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/09 14:39:41 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*pt_dest;
	unsigned char	*pt_src;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	pt_dest = (unsigned char*)dest;
	pt_src = (unsigned char*)src;
	if (dest < src)
	{
		while (++i < len)
		{
			pt_dest[i] = pt_src[i];
		}
	}
	else
	{
		while (len > 0)
		{
			pt_dest[len - 1] = pt_src[len - 1];
			len--;
		}
	}
	return (dest);
}
