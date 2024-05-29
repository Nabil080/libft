/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:05:15 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/27 13:52:55 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int	*ft_intdup(int n)
{
	int	*dup;

	dup = malloc(sizeof(int));
	*dup = n;
	return (dup);
}

int main(void)
{
	size_t	i;
	t_list	*lst;
	t_list	*start;

	lst = ft_lstnew(ft_intdup(0));
	start = lst;
	i = 1;
	while (i < 10)
	{
		lst->next = ft_lstnew(ft_intdup(i));
		lst = lst->next;
		i++;
	}
	printf("%i\n", *(int *)start->content);
	return 0;
}
*/