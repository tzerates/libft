#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}
