/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:32:15 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/16 18:37:06 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr;

	ptr = (char *) dest;
	while (n-- > 0)
		*ptr++ = *((char *)src++);
	return (dest);
}
