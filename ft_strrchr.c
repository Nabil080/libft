/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:32:08 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/20 18:53:58 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*us;

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
