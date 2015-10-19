#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
{
	t_list	*new;
	t_list	**to_return;
	t_list	*tmp;

	to_return = NULL;
	if (f != NULL && lst != NULL)
	{
		tmp = f(lst);
		to_return = ft_lstnew(tmp->content, tmp->content_size);
		lst = lst->next;
		while (lst)
		{
			tmp = f(lst);
			new = ft_lstnew(tmp->content, tmp->content_size);
			ft_lstaddend(to_return, new);
			lst = lst->next;
		}
	}
	return (to_return);
}
