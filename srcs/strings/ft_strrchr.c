/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:32:08 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/26 16:34:05 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	unsigned char	*us;
	size_t			i;

	uc = (unsigned char) c;
	us = (unsigned char *) s;
	i = ft_strlen(s);
	while (i)
	{
		if (us[i] == uc)
			return ((char *) &us[i]);
		i--;
	}
	if (us[i] == uc)
		return ((char *) &us[i]);
	return (NULL);
}
/*
int main(int argc, char const *argv[])
{
	if (argc != 3)
		return (1);
	printf("strrchr : %s\n", strrchr(argv[1], *(argv[2])));
	printf("ft_strrchr : %s\n", ft_strrchr(argv[1], *(argv[2])));
	return 0;
}
*/