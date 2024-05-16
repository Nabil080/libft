/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:10:51 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/16 18:37:06 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_ptr;
	size_t	tmp_n;
	char	*ptr;

	tmp_n = n;
	while (tmp_n--)
		*tmp_ptr++ = *((char *)src++);
	ptr = (char *) dest;
	while (n--)
		*ptr++ = *((char *)tmp_ptr++);
	return (dest);
}
