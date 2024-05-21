/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:31:06 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 13:09:21 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	area;

	if (size && nmemb > INT_MAX / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		area = 1;
	else
		area = nmemb * size;
	tab = malloc(area);
	if (!tab)
		return (NULL);
	ft_bzero(tab, area);
	return (tab);
}
