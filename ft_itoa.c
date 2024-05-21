/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:28:49 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 14:16:10 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoa_len(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_itoa_len(n);
	str = malloc((len + 1) * sizeof (char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	i = 0;
	while (n >= 10)
	{
		str[len - 1 - i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	str[len - 1 - i] = (n % 10) + 48;
	str[len] = 0;
	return (str);
}
/*
int main(int argc, char const *argv[])
{
	if (argc != 2)
		return (1);
	printf("ft_itoa : %s\n", ft_itoa(atoi(argv[1])));
	return 0;
}
*/
