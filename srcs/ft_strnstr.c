#include "libft.h"

//ask about this one

char	*ft_strstr(char *str, char *to_find, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str || !to_find)
		return (NULL);
	if (!to_find[0])
		return (str);
	while (str[i] && i < len)
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j] && str[i + j])
				j++;
			if (to_find[j] == '\0')
				return (str + i);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
