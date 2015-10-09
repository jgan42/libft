#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, sizet_t len)
{
	char	*str;
	int		i;

	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}