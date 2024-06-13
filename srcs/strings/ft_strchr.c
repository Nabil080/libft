/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:31:52 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/24 14:32:28 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
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
int main(int argc, char const *argv[])
{
	if (argc != 3)
		return (0);
	printf("strchr : %s\n", strchr(argv[1], *(argv[2])));
	printf("ft_strchr : %s\n", ft_strchr(argv[1], *(argv[2])));
	return (0);
}
*/