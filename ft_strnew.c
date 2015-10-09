#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)malloc(size + 1);
	if (!s)
		return (0);
	return (ft_bzero(s, size));
}