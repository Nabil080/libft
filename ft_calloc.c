#include "header.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *tab;
    size_t  area;

    if (nmemb == 0 || size == 0)
        return (NULL);
    area = nmemb * size;
    tab = malloc(area);
    if (!tab)
        return (NULL);
    ft_bzero(tab, area);
    return (tab);
}