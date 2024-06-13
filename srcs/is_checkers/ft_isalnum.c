/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:50:33 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 13:47:58 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int main(int argc, char const *argv[])
{
	if (argc != 2)
		return (1);
	printf("isalnum : %i\n", isalnum(*argv[1]));
	printf("ft_isalnum : %i\n", ft_isalnum(*argv[1]));
	return (0);
}
*/