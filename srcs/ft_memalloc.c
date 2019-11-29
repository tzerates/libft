#include "libft.h"

void *ft_memalloc(size_t size)
{
	void	*dest;

	if(!(dest = (void *)malloc(sizeof(*dest) * size)))
		return (NULL);
	ft_bzero(dest, size);
	return (dest);
}
