/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:54:24 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 14:09:14 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
int	*ft_intdup(int n)
{
	int	*dup;

	dup = malloc(sizeof(int));
	*dup = n;
	return (dup);
}

static void	ft_addone(void *content)
{
	int	*nm;

	nm = (int *)content;
	*nm += 1;
}
static void	ft_putnbr(void *content)
{
	int	fd;
	int	nm;

	nm = *(int *)content;
	fd = 1;
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

int	main(void)
{
	size_t	i;
	t_list	*lst;

	i = 0;
	lst = NULL;
	while (i < 10)
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_intdup(i)));
		i++;
	}
	ft_lstiter(lst, ft_addone);
	ft_lstiter(lst, ft_putnbr);
	ft_lstclear(&lst, free);
	return (0);
}
*/