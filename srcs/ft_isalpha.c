#include "libft.h"

int	ft_is_alpha(int c)
{
	if (!((c >= 65) && (c <= 90)) || !((c >= 97) && (c <= 122)))
		return (0);
	return (1);
}
