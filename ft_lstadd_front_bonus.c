/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:04:20 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 13:21:12 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
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
	t_list	**lst;
	t_list	*new;

	lst = malloc(sizeof(t_list *));
	*lst = ft_lstnew(ft_intdup(0));
	i = 1;
	while (i < 10)
	{
		new = ft_lstnew(ft_intdup(i));
		ft_lstadd_front(lst, new);
		*lst = new;
		i++;
	}
	printf("%i\n", *(int *)(*lst)->content);
	return 0;
}
*/