
#include "libft.h"

int		strlen_strs(char **strs, int size)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (i <= size - 1)
	{
		res = res + ft_strlen(strs[i]);
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*dest;
	int		i;
	int		longueur;

	i = 0;
	if (size == 0)
		return (malloc(0));
	longueur = strlen_strs(strs, size) + ((size - 1) * ft_strlen(sep)) + 1;
	dest = (char *)malloc(sizeof(char) * longueur);
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	while (i <= size - 1)
	{
		ft_strncat(dest, strs[i]);
		if (i < size - 1)
			ft_strncat(dest, sep);
		i++;
	}
	dest[strlen_strs(strs, size) + (ft_strlen(sep) * (size - 1))] = '\0';
	return (dest);
}
