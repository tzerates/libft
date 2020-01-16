/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <tzerates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:05:11 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/09 14:55:53 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
		return ((char*)(s + ft_strlen(s)));
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char*)(s + i));
		i++;
	}
	return (NULL);
}
