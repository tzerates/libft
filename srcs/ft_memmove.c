#include "stdlib.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *pt_dest;
	unsigned char *pt_src;
	int i;

	i = 0;
	pt_dest = (unsigned char*)dest;
	pt_src = (unsigned char*)src;
	if (dest < src)
	{
		while (n != 0)
		{
			pt_src[n] = pt_dest[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			pt_src[i] = pt_dest[i];
			i++;
		}
	}
	return (dest);
}
