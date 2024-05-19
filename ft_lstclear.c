#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst->next)
	{
		next = *lst->next;
		ft_lstdelone(*lst, del);
		lst = &next;		
	}
	ft_lstdelone(*lst, del);
	lst = NULL;
}