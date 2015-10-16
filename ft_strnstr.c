#include "libft.h"

char	*ft_strnstr(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && j < n)
			j++;
		if (!s2[j] || j == n)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
