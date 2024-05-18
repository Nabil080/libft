/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:34:09 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/18 19:52:43 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nm, int fd)
{
	if (nm == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nm < 0)
	{
		ft_putchar_fd('-', fd);
		nm *= -1;
	}
	if (nm >= 10)
		ft_putnbr_fd(nm / 10, fd);
	ft_putchar_fd(nm % 10 + 48, fd);
}
/*
#include <fcntl.h>
int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	int	file = open("slt.txt", O_WRONLY);
	ft_putendl_fd((argv[1]), file);
	close(file);
	return 0;
}
*/