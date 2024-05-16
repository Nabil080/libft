/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:24:43 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/16 15:04:09 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	*memset(void *s, int c, size_t n)
{
	size_t	i;
	int		*ptr;

	ptr = (int *)ptr;
	i = 0;
	while (i < n)
	{
		*ptr = c;
		ptr++;
	}
	return (s);
}