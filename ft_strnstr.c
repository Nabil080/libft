/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:43:00 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/18 14:47:17 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (little[0] == 0)
		return ((char *)big);
	i = 0;
	little_len = ft_strlen(little);
	while (big[i] && i < len)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
