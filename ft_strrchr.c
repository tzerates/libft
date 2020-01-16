/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <tzerates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:19:59 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/08 17:01:15 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int tmp;

	tmp = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			tmp = i;
		i++;
	}
	if (c == '\0')
		return ((char*)(str + ft_strlen(str)));
	if (tmp == -1)
		return (NULL);
	return ((char*)(str + tmp));
}
