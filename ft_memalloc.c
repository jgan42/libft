#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	m = malloc(size);
	if (!m)
		return (0);
	ft_bzero(m, size);
	return (m);
}
