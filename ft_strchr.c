/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:31:52 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/18 14:35:06 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *) &s[i]);
        i++;
    }
    return (NULL);
}