#include "header.h"

char    *ft_strdup(const char *s)
{
    char    *dup;
    size_t  i;

    dup = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!dup)
        return (NULL);
    i = 0;
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
}