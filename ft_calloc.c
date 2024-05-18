/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:31:06 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/18 14:32:16 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *tab;
    size_t  area;

    if (nmemb == 0 || size == 0)
        return (NULL);
    area = nmemb * size;
    tab = malloc(area);
    if (!tab)
        return (NULL);
    ft_bzero(tab, area);
    return (tab);
}