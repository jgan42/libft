#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		s[i] = '\0';
		i--;
	}
}
