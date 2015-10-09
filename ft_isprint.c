#include "libft.h"

int		ft_isprint(int c)
{
	if (ft_isdigit(c))
		return (ft_isdigit(c));
	else if (ft_isalnum(c))
		return (ft_isalnum(c));
	else if (c == 32)
		return (128);
	else if (c >= ' ' && c <= '~')
		return (16);
	return (0);
}