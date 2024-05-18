#include "header.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char    *ptr_s1;
    char    *ptr_s2;
    size_t  i;

    ptr_s1 = (char *) s1;
    ptr_s2 = (char *) s2;
    return (ft_strncmp(ptr_s1, ptr_s2, n));
}