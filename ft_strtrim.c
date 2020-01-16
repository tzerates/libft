/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <tzerates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 19:04:44 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/08 19:22:00 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char		*ft_strnew(size_t size)
{
	char	*new;

	if (!(new = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}

char			*ft_strtrim(char const *s, char const *set)
{
	char	*res;
	size_t	i;
	size_t	j;
	int		k;

	k = 0;
	if (!s)
		return (NULL);
	i = 0;
	while (is_set(s[i], set))
		i++;
	j = ft_strlen(s);
	if (i == j)
		return (ft_strnew(0));
	while (is_set(s[j - 1], set))
		j--;
	if (!(res = ft_strnew(j - i)))
		return (NULL);
	while (i < j)
		res[k++] = s[i++];
	res[k] = '\0';
	return (res);
}
