
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char pt_s;

	i = 0;
	pt_s = (unsigned char*)s;
	while (i < n)
	{
		if (pt_s[i] == (unsigned char)c)
			return ((void*)(pt_s + i));
		i++;
	}
	return (NULL);
}
