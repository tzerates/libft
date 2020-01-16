/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <tzerates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 15:16:54 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/08 17:40:23 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t				i;
	const unsigned char	*pt_s1;
	const unsigned char	*pt_s2;

	i = 0;
	pt_s1 = s1;
	pt_s2 = s2;
	while (i < len)
	{
		if (pt_s1[i] != pt_s2[i])
			return ((int)(pt_s1[i] - pt_s2[i]));
		i++;
	}
	return (0);
}
