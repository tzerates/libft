/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:11:44 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/06 15:16:26 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt_s;

	i = 0;
	pt_s = (unsigned char*)s;
	while (i < n)
	{
		if (pt_s[i] == (unsigned char)c)
			return ((void*)pt_s + i);
		i++;
	}
	return (NULL);
}
