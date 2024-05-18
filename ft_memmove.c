/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:10:51 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/18 16:48:17 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	ptr = (char *) dest;
	i = 0;
	while (i < n)
	{
		if (dest < src)
			ptr[i] = *((char *)&src[i]);
		else
			ptr[n - i - 1] = *((char *)&src[n - i - 1]);
		i++;
	}
	return (dest);
}

/*
dest = "cdexx";
src = "abcde";
n = 5;

i = 0;
dest = "adexx";
src = "abade";

i = 1;
dest = "abexx";
src = "ababe";

i = 2;
dest = "abaxx";
src = "ababa";

i = 3;
dest = "ababx";
src = "ababab";

i = 4;
dest = "ababa";
src = "abababa";

dest = "**abc";
src = "abcde";
n = 5;

i = 0;
dest = "a*abc";
src = "abcde";

i = 1;
dest = "ababc";
src = "abcde";

i = 2;
dest = "abcbc";
src = "cbcde";

i = 3;
dest = "abcdc";
src = "cdcde";

i = 4;
dest = "abcde";
src = "cdede";

*/
