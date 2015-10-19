#include "libft.h"

void	ft_lstaddend(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		while (lst->next)
			lst = lst->next;
		lst->next = new;
	}
}
