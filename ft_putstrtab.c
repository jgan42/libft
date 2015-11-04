#include "libft.h"

void	ft_putstrtab(const char **tab, const char *sep)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putstr(sep);
		i++;
	}
}
