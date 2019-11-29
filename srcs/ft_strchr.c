
#include "libft.h"

char *strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return ((char*)(str + i));
		i++;
	}
	return (NULL);
}
