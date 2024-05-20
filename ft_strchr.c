/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:31:52 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/20 18:34:20 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	unsigned char	uc;
	unsigned char	*us;

	uc = (unsigned char) c;
	us = (unsigned char *) s;
	i = 0;
	while (us[i])
	{
		if (us[i] == uc)
			return ((char *) &us[i]);
		i++;
	}
	if (us[i] == uc)
		return ((char *) &us[i]);
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
