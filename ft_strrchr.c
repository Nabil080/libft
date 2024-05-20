/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:32:08 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/20 17:52:04 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!ft_isascii(c))
		return ((char *) s);
	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return (NULL);
}
