/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:04:13 by nbellila          #+#    #+#             */
/*   Updated: 2024/06/13 14:09:46 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_list	*ft_lstlast_offset(t_list *lst, size_t offset)
{
	size_t	size;
	size_t	i;

	if (!lst)
		return (NULL);
	size = ft_lstsize(lst);
	if (size <= offset)
		return (lst);
	i = 1;
	while (i < size - offset)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
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
	printf("%i\n", *(int *)ft_lstlast(start)->content);
	return 0;
}
*/