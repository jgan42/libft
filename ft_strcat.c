#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
