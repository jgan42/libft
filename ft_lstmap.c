#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*maplist;

	maplist = NULL;
	if (f)
	{
		while (lst)
		{
			ft_lstaddend(&maplist, f(lst));
			lst = lst->next;
		}
	}
	return (maplist);
}
