#include "header.h"

char    *strrchr(const char *s, int c)
{
    size_t  i;

    i = ft_strlen(s);
    while (i)
    {
        if (s[i] == c)
            return (&s[i]);
        i--;
    }
    return (NULL);
}