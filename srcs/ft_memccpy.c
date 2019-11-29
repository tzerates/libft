#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*pt_dest;
	unsigned char	*pt_src;
	size_t		i;

	pt_dest = (unsigned char*)dest;
	pt_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		pt_dest[i] = pt_src[i];
		if (pt_src[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		i++;
	}
	return (NULL);
}
