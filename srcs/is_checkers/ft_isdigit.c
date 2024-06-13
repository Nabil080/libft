/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:50:33 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 13:48:34 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}

/*
int main(int argc, char const *argv[])
{
	if (argc != 2)
		return (1);
	printf("isdigit : %i\n", isdigit(*argv[1]));
	printf("ft_isdigit : %i\n", ft_isdigit(*argv[1]));
	return (0);
}
*/