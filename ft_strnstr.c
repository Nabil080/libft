#include "header.h"

char    *strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  little_len;

    if (little[0] == 0)
        return (big);
    i = 0;
    little_len = ft_strlen(little);
    while (big[i] && i < len)
    {
        if (ft_strncmp(&big[i], little, little_len) == 0)
            return (&big[i]);
        i++;
    }
    return (NULL);
}

