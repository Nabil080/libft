/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:07:57 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 14:05:19 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
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

	lst = malloc(sizeof(t_list *));
	*lst = ft_lstnew(ft_intdup(0));
	i = 1;
	while (i < 10)
	{
		ft_lstadd_back(lst, ft_lstnew(ft_intdup(i)));
		i++;
	}
	printf("%i\n", *(int *)(*lst)->next->next->next->next->content);
	return 0;
}
*/