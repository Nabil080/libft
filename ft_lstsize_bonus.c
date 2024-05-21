/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:11:41 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/21 14:10:35 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
int	*ft_intdup(int n)
{
	int	*dup;

	dup = malloc(sizeof(int));
	*dup = n;
	return (dup);
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
	printf("lstsize : %i\n", ft_lstsize(lst));
	ft_lstclear(&lst, free);
	return (0);
}
*/