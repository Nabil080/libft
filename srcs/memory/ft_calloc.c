/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:31:06 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/29 17:47:51 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	area;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	area = nmemb * size;
	tab = malloc(area);
	if (!tab)
		return (NULL);
	ft_bzero(tab, area);
	return (tab);
}
/*
int main(void)
{
	size_t nb1 = 10737418174;
	size_t nb2 = 3;
	char *cal = (char *) calloc(nb1, nb2);
	char *ft_cal = (char *) ft_calloc(nb1, nb2);
	if (cal)
		printf("calloc : %s\n", cal);
	if (ft_cal)
		printf("ft_calloc : %s\n", ft_cal);
	return 0;
}
*/