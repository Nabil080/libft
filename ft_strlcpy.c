#include "header.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  src_len;
    size_t  dest_len;

    src_len = ft_strlen(src);
    if (size == 0)
        return (src_len);
    dest_len = 0;
    while (src[dest_len] && dest_len < size - 1)
    {
        dest[dest_len] = src[dest_len];
        dest_len++;
    }
    dest[i] = 0;
    return (src_len);
}