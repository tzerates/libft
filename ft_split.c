/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzerates <tzerates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 14:06:24 by tzerates          #+#    #+#             */
/*   Updated: 2020/01/16 15:58:44 by tzerates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				**ft_free(char **index, int count)
{
	while (count > -1)
	{
		free(index[count]);
		count--;
	}
	free(index);
	return (NULL);
}

static void				ft_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static unsigned int		count_words(const char *str, char c)
{
	unsigned int i;
	unsigned int nb_words;
	unsigned int word_len;

	nb_words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != c)
			word_len++;
		if (word_len)
			nb_words++;
		i += word_len;
	}
	return (nb_words);
}

static char				**fill_words(char **index, const char *str,
		char c, unsigned int nb_words)
{
	unsigned int	word_len;
	unsigned int	i;
	unsigned int	j;

	i = -1;
	j = 0;
	while (++i < nb_words)
	{
		while (str[j] && str[j] == c)
			j++;
		word_len = 0;
		while (str[j + word_len] && str[j + word_len] != c)
			word_len++;
		index[i] = (char*)malloc(sizeof(char) * (word_len + 1));
		if (!index[i])
			return (ft_free(index, i));
		ft_strcpy(index[i], (char*)&str[j], word_len);
		j += word_len;
	}
	return (index);
}

char					**ft_split(const char *str, char c)
{
	char			**index;
	unsigned int	nb_words;

	if (!str)
		return (NULL);
	nb_words = count_words((char*)str, c);
	index = (char**)malloc(sizeof(char*) * (nb_words + 1));
	if (!index)
		return (NULL);
	index = fill_words(index, (char*)str, c, nb_words);
	index[nb_words] = 0;
	return (index);
}
