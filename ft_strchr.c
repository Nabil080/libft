char    *strchr(const char *s, int c)
{
    size_t  i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    return (NULL);
}