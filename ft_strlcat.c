#include "header.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	initial_dest;
	size_t	ret_value;

	initial_dest = ft_strlen(dst);
	if (siz < initial_dest)
		ret_value = (ft_strlen(src) + siz);
	else
		ret_value = (ft_strlen(src) + initial_dest);
	i = 0;
	while (initial_dest + i < siz)
	{
		dst[initial_dest + i] = src[i];
		i++;
	}
	if (siz != 0)
		dst[initial_dest + i] = 0;
	return (ret_value);
}