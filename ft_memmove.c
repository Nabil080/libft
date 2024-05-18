/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:10:51 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/18 14:45:35 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char *) dest;
	i = 0;
	while (i < n)
	{
		if (dest < src)
			ptr[i] = *((char *)src++);
		else
			ptr[n - i] = *((char *)src++);
		i++;
	}
	return (dest);
}
