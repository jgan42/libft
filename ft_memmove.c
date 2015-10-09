#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	c;
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		c = src[i];
		dest[i] = c;
		i++;
	}
	return (dest);
}