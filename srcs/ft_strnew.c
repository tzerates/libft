#include "libft.h"

char	*ft_strnew(size_t size)
{
	int	i;
	char	*new;

	if(!(new = (char*)malloc(sizeof(*new) * (size + 1))))
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}
