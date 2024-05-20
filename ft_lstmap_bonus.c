/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:56:50 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/20 19:35:14 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**map;
	t_list	*next;

	if (!lst)
		return (NULL);
	map = malloc(sizeof(t_list *));
	if (!map)
		return (NULL);
	while (lst)
	{
		next = lst->next;
		if (f(lst->content))
			ft_lstadd_back(map, ft_lstnew(f(lst->content)));
		else
			ft_lstdelone(lst, del);
		lst = next;
	}
	next = *map;
	free(map);
	return (next);
}
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*prev;
	t_list	*next;

	if (!lst)
		return (NULL);
	start = lst;
	prev = NULL;
	while (lst)
	{
		next = lst->next;
		if (!f(lst->content))
		{
			if (prev)
				prev->next = next;
			prev = lst;
			del(lst);
		}
		if (lst)
			prev = lst;
		lst = next;
	}
	return (start);
}
*/