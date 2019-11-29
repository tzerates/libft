#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *dest;

	if (!s || !(*f))
		return (NULL);
	i = 0;
	if(!(dest = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while(s[i])
	{
		dest[i] = (*f)(s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
