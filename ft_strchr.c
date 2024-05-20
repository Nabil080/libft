/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:31:52 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/20 17:51:09 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!ft_isascii(c))
		return ((char *) s);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return (NULL);
}
/*
int main(void)
{
	char s[] = "teast";

	printf("%s\n", ft_strchr(s, 't'));
	printf("%s\n", ft_strchr(s, 'l'));
	printf("%s\n", ft_strchr(s, 'z'));
	printf("%s\n", ft_strchr(s, 0));
	printf("%s\n", ft_strchr(s, 800));
	return (0);
}
*/
