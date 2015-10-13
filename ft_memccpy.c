#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*src1;
	char	*dest1;

	src1 = (char *)src;
	dest1 = (char *)dest;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		if (src1[i] == c)
			return ((char *)dest + i + 1);
		i++;
	}
	return (0);
}
