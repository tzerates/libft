#include "libft.h"

int				is_charset(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

unsigned int	count_words(char *str, char *charset)
{
	unsigned int i;
	unsigned int nb_words;
	unsigned int word_len;

	nb_words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		word_len = 0;
		while (str[i + word_len] && !is_charset(str[i + word_len], charset))
			word_len++;
		if (word_len)
			nb_words++;
		i += word_len;
	}
	return (nb_words);
}

char			**fill_words(char **res, char *str,
		char *charset, unsigned int nb_words)
{
	unsigned int	word_len;
	unsigned int	i;
	unsigned int	j;

	i = -1;
	j = 0;
	while (++i < nb_words)
	{
		while (str[j] && is_charset(str[j], charset))
			j++;
		word_len = 0;
		while (str[j + word_len] && !is_charset(str[j + word_len], charset))
			word_len++;
		if(!(res[i] = (char *)malloc(sizeof(*res[i]) * (word_len + 1))))
			return (NULL);
		ft_strcpy(res[i], &str[j], word_len);
		j += word_len;
	}
	return (res);
}

char			**ft_split(char *str, char *charset)
{
	char			**index;
	unsigned int	nb_words;

	nb_words = count_words(str, charset);
	if (!(index = (char **)malloc(sizeof(*index) * (nb_words + 1))))
		return (NULL);
	index = fill_words(index, str, charset, nb_words);
	index[nb_words] = 0;
	return (index);
}
