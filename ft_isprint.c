/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:50:33 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 13:48:52 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= ' ' && c <= '~'));
}

/*
int main(int argc, char const *argv[])
{
	if (argc != 2)
		return (1);
	printf("isprint : %i\n", isprint(*argv[1]));
	printf("ft_isprint : %i\n", ft_isprint(*argv[1]));
	return (0);
}
*/