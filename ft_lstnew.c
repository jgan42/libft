#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	new->content = content;
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
