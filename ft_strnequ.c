#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i] == 0 ? 1 : 0);
}
