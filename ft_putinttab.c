#include "libft.h"

void	ft_putinttab(int *tab, unsigned int len, const char *sep)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		ft_putnbr(tab[i]);
		ft_putstr(sep);
		i++;
	}
}
