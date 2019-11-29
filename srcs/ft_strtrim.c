#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *res;
	size_t i;
	size_t j;
	int k;

	k = 0;
	if (!s)
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = ft_strlen(s);
	if (i == j)
		return(ft_strnew(0));
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j--;
	if (!(res = ft_strnew(j - i)))
		return (NULL);
	while (i < j)
		res[k++] = s[i++];
	res[k] = '\0';
	return (res);	
}
