void    *memchr(const void *s, int c, size_t n)
{
    unsigned char    *ptr;
    size_t  i;

    ptr = (unsigned char *) s;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == c)
            return (s + i);
        i++;
    }
    return (NULL);
}