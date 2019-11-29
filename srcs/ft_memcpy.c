#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
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
		i++;
	}
	return (dest);
}
