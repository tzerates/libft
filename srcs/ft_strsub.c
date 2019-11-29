
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*dest;
	unsigned int	i;

	if (!s)
		return (NULL);
	if(!(dest = (char*)malloc(sizeof(*dest) * (len + 1))))
		return (NULL);
	i = 0;
	while(i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
