/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbellila <nbellila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:06:37 by nbellila          #+#    #+#             */
/*   Updated: 2024/05/20 14:10:56 by nbellila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while ((*lst)->next)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		lst = &next;
	}
	ft_lstdelone(*lst, del);
	lst = NULL;
}
