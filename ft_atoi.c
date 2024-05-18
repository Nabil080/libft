/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:14:34 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/18 14:43:50 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_atoi(const char *nptr)
{
	long	result;
	int		charge;
	size_t	i;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	charge = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			charge *= -1;
		i++;
	}
	result = 0;
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			return (0);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * charge);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("atoi : %i\n", atoi(argv[1]));
	printf("ft_atoi : %i\n", ft_atoi(argv[1]));
	return (0);
}
*/