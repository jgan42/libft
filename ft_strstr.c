#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
