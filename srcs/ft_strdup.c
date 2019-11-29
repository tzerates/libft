
#include "libft.h"

char    *ft_strdup(char *src)
{
        char    *dest;
        int             i;

        i = 0;
        dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
        if (src == NULL || dest == NULL)
                return (NULL);
        while (src[i])
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}
