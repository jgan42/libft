#include "libft.h"

char	*ft_strnstr(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0' && j < n)
			j++;
		if (j == n)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
