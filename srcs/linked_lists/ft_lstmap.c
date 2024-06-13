/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:56:50 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/27 16:09:43 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*new_content;
	t_list	*new_node;

	map = NULL;
	while (lst && f && del)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, new_node);
		lst = lst->next;
	}
	return (map);
}
/*
int	*ft_intdup(int n)
{
	int	*dup;

	dup = malloc(sizeof(int));
	*dup = n;
	return (dup);
}

static void	*ft_addone(void *content)
{
	int	*nm;
	nm = malloc(sizeof(int));
	*nm = (*(int *)content) + 1;
	return (nm);
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
	t_list	*map;

	i = 0;
	lst = NULL;
	while (i < 10)
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_intdup(i)));
		i++;
	}
	map = ft_lstmap(lst, ft_addone, free);
	ft_lstiter(map, ft_putnbr);
	ft_lstclear(&map, free);
	ft_lstclear(&lst, free);
	return (0);
}
*/
