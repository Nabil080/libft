/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:03:16 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 13:47:51 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int main(int argc, char const *argv[])
{
	if (argc != 2)
		return (1);
	printf("isascii : %i\n", isascii(*argv[1]));
	printf("ft_isascii : %i\n", ft_isascii(*argv[1]));
	return (0);
}
*/