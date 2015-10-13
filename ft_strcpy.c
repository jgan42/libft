#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * ft_strlen(dest) + 1);
	i = 0;
	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	i = 0;
	while (tmp[i])
	{
		dest[i] = tmp[i];
		i++;
	}
	dest[i] = '\0';
	free(tmp);
	return (dest);
}
