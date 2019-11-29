#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int x;
	unsigned int y;

	x = 0;
	y = 0;
	while (src[y])
		y++;
	while (dest[x])
		x++;
	if (size <= x)
		return (y + size);
	i = 0;
	while (src[i] && i + x < size - 1)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (x + y);
}
