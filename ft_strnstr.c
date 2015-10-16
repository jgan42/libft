#include "libft.h"

char	*ft_strnstr(char *s1, const char *s2, size_t n)
{
	if (!(*s2))
		return ((char *)s1);
	if (!(*s1) || n == 0)
			return (NULL);
	if (*s1 == *s2)
	{
		if (ft_strnstr(s1 + 1, s2 + 1, n - 1) - 1 == s1)
			return ((char *)s1);
	}
	return (ft_strnstr(s1 + 1, s2, n - 1));
}
